#include <stdio.h>

void fold(int);

int main(void) {
	int n = 80;
	fold(n);
}

void fold(int column_size) {
	int c, idx, i, last_blank;
	char column[column_size];

	idx = 0;
	while ((c = getchar()) != EOF) {
		if (idx == column_size) {
			last_blank = 0;
			for (i = 0; i < column_size; i++)
				if (column[i] == ' ') last_blank = i;

			for (i = 0; i < column_size; i++) {
				if (i == last_blank) putchar('\n');
				putchar(column[i]);
			}
			idx = 0;
		}
		column[idx++] = c;
	}
}

