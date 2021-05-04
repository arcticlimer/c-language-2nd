#include <stdio.h>
#define MAXLINE 1000

int getline_(char line[], int maxline);

int main(void) {
	char line[MAXLINE] ;
	int length;

	while((length = getline_(line, MAXLINE)) != 0)
		if (length > 80)
			printf("%s\n", line);

	return 0;
}

int getline_(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
