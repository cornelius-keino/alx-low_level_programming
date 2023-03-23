#include "main.h"
/**
 * print_diagonal - print diagonal line
 * @n: number of times the cheracter is printed
 *
 * Return: integer of n
 */
void print_diagonal(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
int a;

for (a = 1; a < n; a++)
{
_putchar('\\');
}
}
_putchar('\n);
}
