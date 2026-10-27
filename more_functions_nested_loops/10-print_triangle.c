#include "main.h"

/**
 * print_triangle - prints a right triangle of size 'size' aligned to the right
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = i; j < (size - 1); j++)
				_putchar(' ');
			for (j = (size - i); j <= size; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
