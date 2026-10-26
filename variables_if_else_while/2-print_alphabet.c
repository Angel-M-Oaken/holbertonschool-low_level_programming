#include <stdlib.h>
#include <stdio.h>

/**
 * main - description
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
		putchar(letter++);
	putchar('\n');
	return (0);
}
