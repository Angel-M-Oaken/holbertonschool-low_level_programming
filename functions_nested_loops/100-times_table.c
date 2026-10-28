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
		_putchar(n + '0');
	}
	else if (n > 9)
	{
		put_nbr(n / 10);
		_putchar('0' + (n % 10));
	}
}

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: how many tables to print ( min 1 max 15 )
 */
void print_times_table(int n)
{
    int x = 0;
    int y = 0;
    int tmp;

    if (n < 0 || n > 15)
        return;

    for (x = 0; x <= n; x++)
    {
        for (y = 0; y <= n; y++)
        {
            tmp = x * y;
            if (y > 0)
            {
                _putchar(',');
                _putchar(' ');
            }
            if (y > 0 && tmp < 10)
                _putchar(' ');
            if (y > 0 && tmp < 100)
                _putchar(' ');

            put_nbr(tmp);
        }
        _putchar('\n');
    }
}