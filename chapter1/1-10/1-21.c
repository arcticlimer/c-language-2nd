#include <stdio.h>

void entab(int);

int main(void) {
	int n = 4;
	entab(n);
}

void entab(int n) {
	int c, nspaces;

	nspaces = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') nspaces++;
		else putchar(c);

		if (nspaces == n) {
			putchar('\t');
			nspaces = 0;
		}
	}
}

