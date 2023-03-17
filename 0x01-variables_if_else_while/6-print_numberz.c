#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'number generator'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char number;

for (number = '0'; number < '10'; number++)
{
putchar(number);
}
putchar('\n');
return (0);
}
