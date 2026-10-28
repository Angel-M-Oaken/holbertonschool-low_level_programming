#include "main.h"

/**
 * print_number - print a number
 * @n: number to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * (-1);
	}
	if (n >= 0 && n <= 9)
	{
		_putchar(n + 48);
	}
	else if (n > 9)
	{
		print_number(n / 10);
		_putchar('0' + (n % 10));
	}
}
