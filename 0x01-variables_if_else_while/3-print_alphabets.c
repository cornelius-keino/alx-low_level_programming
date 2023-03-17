#include <stdio.h>
#include <ctype.h>
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
putchar (ch);
}
for (ch = 'a'; ch <= 'z'; ch++)
{
x = toupper(ch);
putchar (x);
}
putchar ('\n');
return (0);
}
