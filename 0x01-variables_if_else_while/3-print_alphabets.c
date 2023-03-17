#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'print in upper case'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int ch;
int x;

for (ch = 'a'; ch <= 'z'; ch++)
{
x = toupper(ch);
putchar (ch);
putchar (x);
}
putchar ("\n")
return (0);
}
