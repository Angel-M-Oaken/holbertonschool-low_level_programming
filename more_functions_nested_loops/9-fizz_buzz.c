#include "main.h"
#include <stdio.h>

/**
 * main - prints number for 0 to 100 or fizz / buzz if multiple of 3 or 5
 * and fizzbuzz if multiple of both
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%d", i);
		putchar(' ');
	}
	printf("Buzz\n");
	return (0);
}
