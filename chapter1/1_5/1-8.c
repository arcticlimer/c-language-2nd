#include <stdio.h>

int main(void) {
	int blanks, newlines, tabs, c;
	blanks = newlines = tabs = 0;

	while((c = getchar()) != EOF) {
		if (c == '\t') tabs++;
		else if (c == '\n') newlines++;
		else if (c == ' ') blanks++;
	}
	printf("Tabs: %d\nBlanks: %d\nNewlines: %d", tabs, blanks, newlines);
}
