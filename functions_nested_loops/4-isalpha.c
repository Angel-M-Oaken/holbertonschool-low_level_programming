#include "main.h"

/**
 * _isalpha - checks if c is alphabetical
 * @c: a character
 * Return: returns 1 if c is alphabetical, else return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
