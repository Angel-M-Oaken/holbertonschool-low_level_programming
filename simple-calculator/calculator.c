#include "main.h"

/**
 * option_handling -  does the correct operation depending on selected option
 * @option: option selected by the user
 */
void option_handling(int option)
{
	int a;
	int b;

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
		break;
	case 2:
		printf("A: ");
		scanf("%d", &a);
		printf("B: ");
		scanf("%d", &b);
		printf("Result: %d\n", (a - b));
		break;
	case 3:
		printf("A: ");
		scanf("%d", &a);
		printf("B: ");
		scanf("%d", &b);
		printf("Result: %d\n", (a * b));
		break;
	case 4:
		printf("A: ");
		scanf("%d", &a);
		printf("B: ");
		scanf("%d", &b);
		if (b == 0)
			printf("Error: division by zero\n");
		else
			printf("Result: %d\n", (a / b));
		break;
	}
}

/**
 * main -  Skeleton of the simple calculator
 * Return: Always 0 (Success)
 */
int main(void)
{
	int input;
	int quit = 0;

	printf("Simple Calculator\n");
	printf("1) Add\n2) Substract\n3) Multiply\n4) Divide\n0) Quit\n");
	while (quit == 0)
	{
		scanf("%d", &input);
		printf("Choice : %d\n", input);
		if (input >= 0 && input <= 4)
		{
			option_handling(input);
			quit = 1;
		}
		else
			printf("Invalid choice\n");
	}
	return (0);
}
