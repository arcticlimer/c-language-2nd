#include <stdio.h>
#define MAXLINE 1000

int getline_(char line[], int maxline);
void reverse(char s[]);

int main(void)
{
	char line[MAXLINE] ;
	while (getline_(line, MAXLINE) != 0) {
		reverse(line);
		printf("reversed: %s\n", line);
	}

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

void reverse(char s[]) {
	int len, i;

	// Get string length
	len = 0;
	while (s[len] != '\0')
		len++;
	len--;

	// Copy string to a temporary array
	char tmp[len];
	for (i = 0; i < len; i++)
		tmp[i] = s[i];

	// Reverse it in place
	for (i = 0; i < len; i++)
		s[len - i - 1] = tmp[i];
}
