#include "main.h"
#include <stdio.h>

/**
 * main - the largest prime factor of the number 612852475143
 * Return: Always (0)
 */
int main(void)
{
	long int n = 612852475143;
	long int factor = 2;
	long  int largest = 0;

	while (n > 1)
	{
		if (n % factor == 0)
		{
			largest = factor;
			n /= factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%lu\n", largest);
	return (0);
}
