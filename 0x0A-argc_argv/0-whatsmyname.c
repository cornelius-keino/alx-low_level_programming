/*#include <stdio.h>*/
#include "main.h"
/**
 * print_program_name - print the name of a program
 * @name: name of the program to be printed
 */
void print_program_name(char *name)
{
	while (*name != '\0')
	{
		_putchar(*name);
	}
	_putchar('\n');
}
/**
 * main - entry point
 * @argc: argument with number of command lines
 * @argv: array of strings containing command line arguments
 * Return: 0 on succsess
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		print_program_name(argv[0]);
	}
	return (0);
}

