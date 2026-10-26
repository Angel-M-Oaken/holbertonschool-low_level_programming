#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int x = 0;
	int y = 0;
	int tmp;

	while (x < 10)
	{
		y = 0;
		while (y < 10)
		{
			tmp = x * y;
			if (y > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (tmp > 9)
			{
				_putchar('0' + (tmp / 10));
				_putchar('0' + (tmp % 10));
			}
			else
			{
				if (y > 0)
					_putchar(' ');
				_putchar('0' + tmp);
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
