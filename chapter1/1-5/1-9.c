#include <stdio.h>

int main(void)
{
	int lastc, c;
	lastc = EOF;

	while ((c = getchar()) != EOF) {
		if (c == ' ' && lastc == ' ')
			continue;
		else putchar(c);
		lastc = c;
	}
}
