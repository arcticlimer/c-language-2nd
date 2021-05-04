#include <stdio.h>
#define MAXLINE 1000

int getline_(char line[], int maxline);

int main(void)
{
	int last_seen_char, len;
	char line[MAXLINE];
	while ((len = getline_(line, MAXLINE)) != 0) {
		for (int i = 0; i < len; i++)
			if (line[i] > ' ' && line[i] < 'z' && line[i] != '\n')
				last_seen_char = i;

		char stripped[len];
		for (int i = 0; i <= last_seen_char; i++)
			stripped[i] = line[i];

		printf("%s\n", stripped);
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
