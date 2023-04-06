#include "main.h"
/**
 * _print_rev_recursion - print characters of a string in reverse
 * @s: pointer to character array
 * Return: void
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
