#include <stdio.h>

int main(void) {
	int c, in_string, in_comment, lastc, idx;

	idx = in_string = in_comment = 0;
	while ((c = getchar()) != EOF) {
		if (c == '/' && lastc == '/' && !in_string)
			// 1 = inline comment
			in_comment = 1;
		if (c == '*' && lastc == '/' && !in_string)
			// 2 = block comment
			in_comment = 2;
		if (c == '"' && !in_comment)
			in_string = 1;
		if (c == '"' && in_string)
			in_string = 0;
		/* If we are not in a comment,
		 * print the character to stdout */
		if (idx == 2) {
			if (!in_comment) {
			  putchar(lastc);
			  putchar(c);
			}
		  idx = 0;
		}
		if (c == '\n' && in_comment == 1 )
			in_comment = 0;
		if (c == '/' && lastc == '*' && in_comment)
			in_comment = 0;
		idx++;
		lastc = c;
	}
}

