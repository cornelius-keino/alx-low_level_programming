#include "main.h"
/**
 * _pow_recursion - print x to power of y
 * @x: number to be raised to
 * @y: exponent
 * Return: power
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);

return (x * _pow_recursion(x, y - 1));
}

