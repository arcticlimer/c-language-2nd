#include <stdio.h>

void detab(int);

int main(void) {
	int n = 4;
	detab(n);
}

void detab(int n) {
	int c;
	while ((c = getchar()) != EOF) {
		if (c == '\t')
			for(int j = 0; j < n; j++) putchar(' ');
		else putchar(c);
	}
}

