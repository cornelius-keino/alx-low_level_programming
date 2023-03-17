#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: 'print in upper case'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
char x;

for (ch = 'a'; ch <= 'z'; ch++)
{
x = toupper(ch);
putchar (ch);
putchar (x);
}
putchar ('\n');
return (0);
}
