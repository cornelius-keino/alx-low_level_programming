#include "main.h"
/**
 * factorial - print the factorial of number
 * @n: number to find the factorial
 * Return: void
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);

return (n * factorial(n - 1));
}
