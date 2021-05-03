#include <stdio.h>

float fahr_to_celsius(float fahr);
float celsius_to_fahr(float celsius);

int main(void)
{
	printf("35C = %.2fF\n", celsius_to_fahr(35.0));
	printf("92F = %.2fC\n", fahr_to_celsius(92.0));
}

float fahr_to_celsius(float fahr) {
	return (5.0 / 9.0) * (fahr - 32);
}

float celsius_to_fahr(float celsius) {
	return celsius * (9.0 / 5.0) + 32;
}
