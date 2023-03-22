#include "main.h"
/**
 * print_last_digit - print the last digit
 * @x: the variable to be printed as last digit
 *
 * Return: the last digit
 */
int print_last_digit(int x)
{
	int last;

	last = x * -1;
	if (last < 0)
		last = last * -1;

	_putchar(last + '0');
	return (last);
}
