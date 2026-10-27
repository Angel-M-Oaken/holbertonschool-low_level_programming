#include "main.h"


/**
 * option_handling - Checks if option selection is valid
 * @option: input from scanf
 * Return: if input is valid return option, else -1
 */
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
 * print_menu -  Display a simple menu
 */
void print_menu(void)
{
	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Substract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
}


/**
 * main -  Skeleton of the simple calculator
 * Return: Always 0 (Success)
 */
int main(void)
{
	int input;
	int option = -1;

	print_menu();
	while (option != 0)
	{
		scanf("%d", &input);
		option = option_handling(input);
		switch (option)
		{
		case 0:
			printf("Bye!\n");
			break;
		default:
			break;
		}
	}
	return (0);
}
