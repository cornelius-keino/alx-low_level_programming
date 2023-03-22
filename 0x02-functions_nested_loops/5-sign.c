#include "main.h"
/**
 * print_sign - Print a sign
 * @n: argument of type int to be checked
 *
 * Description 'printing a sign'
 *
 * Return: 1 0r 0 depending with contol
 */
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar(43);
	}
	else if (n == 0)
	{
		return (0);
		_putchar(48);
	}
	else
	{
		return (-1);
		_putchar(45);
	}
}

