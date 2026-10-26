#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -  print the last digit of n
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("The last digit of %d is %d", n, last_digit);
	if (last_digit < 6 && last_digit != 0)
		printf(" and is less than 6 and not 0\n");
	else if (last_digit >= 6)
		printf(" and is and is greater than 5\n");
	else
		printf(" and is 0\n");
	return (0);
}
