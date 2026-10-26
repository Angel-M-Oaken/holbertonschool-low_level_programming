#include "main.h"

/**
 * _islower - description
 * @c: a character
 * Return: returns 1 if c is lowercase, else return 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
