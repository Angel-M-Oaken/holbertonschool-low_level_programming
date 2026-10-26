#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints all base 10 digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = '0';

	while (digit <= '9')
	{
		putchar(digit++);
		if (digit <= '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
