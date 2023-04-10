#include "main.h"
/**
 * main - entry point of the program
 *@argc: number of command line arguments passed
 *@argv: array of string containing command line  arguments
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
int num1 = 0;
int num2 = 0;

for (int i = 0; argv[1][i] != '\0'; i++)
{
num1 = num1 * 10 + argv[1][i] - '0';
}

for (int i = 0; argv[2][i] != '\0'; i++)
{
num2 = num2 * 10 + argv[2][i] - '0';
}

int result = multiply(num1, num2);

do {
_putchar(result % 10 + '0');
result /= 10;
} while (result > 0);

_putchar('\n');

return (0);
}
/**
 * multiply - multiply two numbers
 *@num1: first number
 *@num2: second number
 *Return: the result
 */
int multiply(int num1, int num2)
{
	mul = num1 *num2;
return (mul);
}

