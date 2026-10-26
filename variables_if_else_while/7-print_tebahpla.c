#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints lowercase alphabet
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter = 'z';

	while (letter >= 'a')
		putchar(letter--);
	putchar('\n');
	return (0);
}
