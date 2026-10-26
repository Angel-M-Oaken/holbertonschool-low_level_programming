#include "main.h"

/**
 * _abs - absolute value of an int
 * @n: an int
 * Return: the absolute value of int
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
