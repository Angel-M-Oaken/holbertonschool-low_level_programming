#include "main.h"

/**
 * get_input -  get and check validity of an input
 * @input: adress to stock the input
 * Return: 1 if succes, 0 if
 */
int get_input(int *input)
{
	int err;
	int c;

	err = scanf("%d", input);
	while ((c = getchar()) != '\n' && c != EOF)
		;
	return (err);
}

/**
 * option_handling -  does the correct operation depending on selected option
 * @option: option selected by the user
 */
void option_handling(int option)
{
	int a = 0;
	int b = 0;
	int err = 2;

	if (option == 0)
	{
		printf("Bye!\n");
		return;
	}
	while (err != 1)
	{
		printf("A: ");
		err = get_input(&a);
		if (err != 1)
			printf("Invalid number\n");
	}
	err = 2;
	while (err != 1)
	{
		printf("B: ");
		err = get_input(&b);
		if (err != 1)
			printf("Invalid number\n");
	}
	switch (option)
	{
	case 1:
		printf("Result: %d\n", (a + b));
		break;
	case 2:
		printf("Result: %d\n", (a - b));
		break;
	case 3:
		printf("Result: %d\n", (a * b));
		break;
	case 4:
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
	int quit = 0;
	int input;
	int err = 2;


	printf("Simple Calculator\n");
	printf("1) Add\n2) Substract\n3) Multiply\n4) Divide\n0) Quit\n");
	while (quit == 0)
	{
		while (err != 1)
		{
			err = get_input(&input);
			if (err != 1)
				printf("Invalid choice\n");
		}
		printf("Choice : %d\n", input);
		if (input >= 0 && input <= 4)
		{
			option_handling(input);
			quit = 1;
		}
		else
		{
			printf("Invalid choice\n");
		}
		err = 2;
	}
	return (0);
}
