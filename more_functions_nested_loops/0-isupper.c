#include "main.h"

/**
 * _isupper - checks if an int is an ASCII uppercase value
 * @c: int to check
 * Return: 1 if c is Uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
