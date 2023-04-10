#include "main.h"
/**
 * print_arg_number - prints the number of argument passsed
 * @argc: argument to print its number
 */
void print_arg_number(int argc)
{
	int number = argc - 1;

	while (number > 0)
	{
		_putchar((number % 10) + '0');
		number = number / 10;
	}
	_putchar('\n');

}
/**
 * main - entry point of the program
 *@argc: number of command line arguments passed
 *@argv: array of string containing command line  arguments
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
	(void) argv;
	print_arg_number(argc);
	return (0);
}


