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

	if (x < 0)
		x = x * -1;

	last = x % 10;
	_putchar(last + '0');
	return (last);
}
