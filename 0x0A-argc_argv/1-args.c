#include "main.h"
/**
 * print_arg_number - prints the number of argument passsed
 * @argc: argument to print its number
 */
void print_arg_number(int argc)
{
	int digit1, digit2, number = argc - 1;

	while (number > 0)
	{
		if (number > 9)
		{
			digit1 = number / 10;
			digit2 = number % 10;
			_putchar(digit1 + '0');
			_putchar(digit2 + '0');
		}
		_putchar(number + '0');
	}

}
/**
 * main - entry point of the program
 *@argc: number of command line arguments passed
 *@argv: array of string containing command line  arguments
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	print_arg_number(argc);
	return (0);
}


