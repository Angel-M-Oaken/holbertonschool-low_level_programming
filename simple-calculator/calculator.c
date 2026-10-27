#include "main.h"

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
		case 3:
			printf("A: ");
			scanf("%d", &a);
			printf("B: ");
			scanf("%d", &b);
			printf("Result: %d\n", (a * b));
			return (0);
		case 4:
			printf("A: ");
			scanf("%d", &a);
			printf("B: ");
			scanf("%d", &b);
			if (b == 0)
				printf("Error: division by zero\n");
			else
				printf("Result: %d\n", (a / b));
			return (0);
		default:
			break;
		}
	}
	return (0);
}
