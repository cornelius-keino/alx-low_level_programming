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
