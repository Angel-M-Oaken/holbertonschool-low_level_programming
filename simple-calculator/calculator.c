#include "main.h"


/**
 * option_handling - Checks if option selection is valid
 * @option: input from scanf
 * Return: if input is valid return option, else -1
 */
int option_handling(int option)
{
	if (option >= 0 && option <= 4)
	{
		printf("Choice : %d\n", option);
		return (option);
	}
	else
	{
		printf("%d is not a valid option.\n", option);
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
	int option;

	print_menu();
	scanf("%d", &input);
	option = option_handling(input);
	switch (option)
	{
	case 0:
		printf("Bye!\n");
		break;
	default:
		printf("WIP\n");
		break;
	}
	return (0);
}
