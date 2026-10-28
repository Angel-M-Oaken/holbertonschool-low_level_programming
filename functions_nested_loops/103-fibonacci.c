#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	long a = 1;
	long b = 2;
	long tmp = 0;
	long res = 0;

	while (tmp < 4000000)
	{
		tmp = a;
		a = b;
		b += tmp;
		if (tmp % 2 == 0)
			res += tmp;
	}
	printf("%ld\n", res);
	return (0);
}
