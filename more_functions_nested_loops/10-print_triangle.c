#include "main.h"

/**
 * print_triangle - prints a right triangle of size 'size' aligned to the right
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int row;
	int columns;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (columns = row; columns < (size - 1); columns++)
				_putchar(' ');
			for (columns = (size - row); columns <= size; columns++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
