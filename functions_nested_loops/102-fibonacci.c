#include "main.h"
#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	long a = 1;
	long b = 2;
	long tmp;
	int i;

	for (i = 0; i < 50; i++)
	{
		tmp = a;
		a = b;
		b += tmp;
		printf("%ld", tmp);
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
