#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i;
	int nb;

	for (i = 0; i < 10; i++)
	{
		for (nb = 0; nb <= 14; nb++)
		{
			if (nb >= 10)
				_putchar('0' + (nb / 10));
			_putchar('0' + (nb % 10));
		}
		_putchar('\n');
	}
}
