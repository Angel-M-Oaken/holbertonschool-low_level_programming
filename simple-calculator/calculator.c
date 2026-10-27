#include "main.h"

int option_handling(int option)
{
	printf("Choice : %d\n", option);
	if (option >= 0 && option <= 4)
		return (option);
	else
	{
		printf("Invalid choice\n");
		return (-1);
	}
}

/**
 * main -  Skeleton of the simple calculator
 * Return: Always 0 (Success)
 */
int main(void)
{
	int input;
	int option = -1;
	int a;
	int b;

	printf("Simple Calculator\n");
	printf("1) Add\n2) Substract\n3) Multiply\n4) Divide\n0) Quit\n");
	while (option != 0)
	{
		scanf("%d", &input);
		printf("Choice : %d\n", input);
		if (input >= 0 && input <= 4)
			option = input;
		else
			printf("Invalid choice\n");
		switch (option)
		{
		case 0:
			printf("Bye!\n");
			break;
		case 1:
			printf("A: ");
			scanf("%d", &a);
			printf("B: ");
			scanf("%d", &b);
			printf("Result: %d\n", (a + b));
			return (0);
		case 2:
			printf("A: ");
			scanf("%d", &a);
			printf("B: ");
			scanf("%d", &b);
			printf("Result: %d\n", (a - b));
			return (0);
		default:
			break;
		}
	}
	return (0);
}
