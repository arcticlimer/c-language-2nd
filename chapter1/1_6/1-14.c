#include <stdio.h>

#define ASCII_RANGE 57

int main(void)
{
	char c;
	int chars[ASCII_RANGE], i;

	for (i = 0; i < ASCII_RANGE; ++i)
		chars[i] = 0;

	while ((c = getchar()) != EOF) {
		if (c >= 'A' && c <= 'z')
			chars[c - 'A']++;
	}

	for (i = 0; i < ASCII_RANGE; i++) {
		printf("%c: ", i + 'A');
		for (int j = 0; j <= chars[i]; j++)
			putchar('O');
		putchar('\n');
	}
}
