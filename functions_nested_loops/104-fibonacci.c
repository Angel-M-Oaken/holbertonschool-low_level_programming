#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int a_hi = 0, a_lo = 1;
	unsigned long int b_hi = 0, b_lo = 2;
	unsigned long int tmp_hi, tmp_lo;
	int i;

	for (i = 0; i < 98; i++)
	{
		if (a_hi == 0)
			printf("%lu", a_lo);
		else
			printf("%lu%09lu", a_hi, a_lo);
		if (i != 97)
			printf(", ");
		tmp_lo = a_lo + b_lo;
		tmp_hi = a_hi + b_hi + (tmp_lo / 1000000000UL);
		tmp_lo %= 1000000000UL;
		a_hi = b_hi;
		a_lo = b_lo;
		b_hi = tmp_hi;
		b_lo = tmp_lo;
	}
	printf("\n");
	return (0);
}
