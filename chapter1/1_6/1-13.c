#include <stdio.h>

#define MAX_WORD_LENGTH 20

int main(void)
{
	int character_count = 0;
	int result[MAX_WORD_LENGTH], i;
	char c;

	for (i = 0; i < MAX_WORD_LENGTH; i++)
		result[i] = 0;

	while ((c = getchar()) != EOF) {
		++character_count;
		if (c == ' ' || c == '\n' || c == '\t') {
			result[character_count-1]++;
			character_count = 0;
		}
	}

	for (i = 0; i < MAX_WORD_LENGTH; ++i) {
		printf("%1d: ", i + 1);
		for (int j = 0; j < result[i]; j++)
			putchar('O');
		putchar('\n');
	}
}
