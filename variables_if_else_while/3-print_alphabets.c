#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints lowercase and uppercase alphabets
 * Return: Always 0 (Success)
 */
int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
		putchar(letter++);
	letter = 'A';
	while (letter <= 'Z')
		putchar(letter++);
	putchar('\n');
	return (0);
}
