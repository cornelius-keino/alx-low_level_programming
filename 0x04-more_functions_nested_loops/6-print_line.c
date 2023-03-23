#include "main.h"
/**
 * print_line - print a line
 * @n: number of times the character will print
 *
 * Return: integer value on n
 */
void print_line(int n)
if (n <= 0)
{
_putchar('\n');
}
else
{
int a;

for (a = 1; a < n; a++)
{
_putchar('_');
}
}
_putchar('\n);
}
