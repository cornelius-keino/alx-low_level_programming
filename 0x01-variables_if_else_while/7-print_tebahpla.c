#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'reverse alphabet'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;

for (ch = 'Z'; ch >= 'A'; ch--)
{
putchar (ch);
}
putchar ('\n');
return (0);
}
