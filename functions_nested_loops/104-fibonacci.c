#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	double a = 1;
	double b = 2;
	double tmp;
	int i;

	for (i = 0; i < 98; i++)
	{
		tmp = a;
		a = b;
		b += tmp;
		printf("%.0f", tmp);
		if (i != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
