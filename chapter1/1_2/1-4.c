#include <stdio.h>

int main(int argc, char *argv[])
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	celsius = lower;
	while (celsius <= upper) {
		fahr = celsius * (9.0 / 5.0) + 32;
		printf("%3.0f %6.0f\n", celsius, fahr);
		celsius += step;
	}
	return 0;
}
