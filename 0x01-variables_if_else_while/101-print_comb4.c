#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: 'three combinations'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int number1;
int number2;
int number3;

for (number1 = 0; number1 < 8; number1++)
{
for (number2 = number1 + 1; number2 < 9; number2++)
{
for (number3 = number2 + 1; number3 < 10; number3++)
{
putchar ((number1 % 10) + '0');
putchar ((number2 % 10) + '0');
putchar ((number3 % 10) + '0');

if (number1 == 7 && number2 == 8 && number3 == 9)
continue;

putchar (',');
putchar (' ');
}
}
}
putchar('\n');
return (0);
}