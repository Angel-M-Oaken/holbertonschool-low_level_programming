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
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i;
	int nb;

	for (i = 0; i < 10; i++)
	{
		for (nb = 0; i <= 14; nb++)
			put_nbr(nb);
	}
}
