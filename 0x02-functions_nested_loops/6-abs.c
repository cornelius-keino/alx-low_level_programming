#include "main.h"
/**
 * _abs - print absolute integer
 * @b: variable to be calculated as absolute
 *
 * Description 'calculate absolute value'
 *
 * Return: 0
 */
int _abs(int b)
{
	int abs;

	if (b < 0)
	{
		abs = b * -1;
		return (abs);
	}
	else
	{
		return (b);
	}
}

