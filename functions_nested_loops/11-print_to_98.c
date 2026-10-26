#include "main.h"


/**
 * put_nbr - prints an int
 * @n: int to print
 */
void put_nbr(int n)
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
		put_nbr(n / 10);
		_putchar('0' + (n % 10));
	}
}

/**
 * print_to_98 - prints all integers from n to 98
 * @n: starting integer
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			put_nbr(n);
			_putchar(',');
			_putchar(' ');
			n--;
		}
	}
	else
	{
		while (n < 98)
		{
			put_nbr(n);
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	put_nbr(98);
	_putchar('\n');
}
