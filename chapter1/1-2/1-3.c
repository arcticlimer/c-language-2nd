#include <stdio.h>

int main(int argc, char *argv[])
{
	float fahr, celsius;
	float lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	printf("Fahrenheit\tCelsius\n");
	while (fahr <= upper) {
		celsius = (5.0 / 9.0) * (fahr-32);
		printf("%10.0f %12.1f\n", fahr, celsius);
		fahr += step;
	}
	return 0;
}
