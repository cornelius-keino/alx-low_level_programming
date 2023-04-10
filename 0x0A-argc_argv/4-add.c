#include "main.h"
/**
 * string_to_int - convert string to integers
 *@str: number
 *Return: result
 */
int string_to_int(char *str)
{
int result = 0;

for (int i = 0; str[i] != '\0'; i++)
{
if (str[i] >= '0' && str[i] <= '9')
{
result = result * 10 + (str[i] - '0');
}
else
{
return (-1);
}
}
return (result);
}
/**
 * print_int - print integers
 *@num: number
 *
 */
void print_int(int num)
{
if (num == 0)
{
_putchar('0');
return;
}
if (num < 0)
{
_putchar('-');
num = -num;
}
int digits[10];
int i = 0;
while (num > 0)
{
digits[i++] = num % 10;
num /= 10;
}
while (i > 0)
{
_putchar(digits[--i] + '0');
}
}

/**
 * add_positive_numbers - print addition of positive numbers
 *@argc: number of command line arguments passed
 *@argv: array of string containing command line  arguments
 *Return: result
 */
int add_positive_numbers(int argc, char *argv[])
{
int sum = 0;
for (int i = 1; i < argc; i++)
{
int num = string_to_int(argv[i]);
if (num <= 0)
{
continue;
}
sum += num;
}
return (sum);
}

/**
 * main - entry point of the program
 *@argc: number of command line arguments passed
 *@argv: array of string containing command line  arguments
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
int sum = add_positive_numbers(argc, argv);
if (sum == 0)
{
_putchar('0');
}
else
{
print_int(sum);
}
_putchar('\n');
return (0);
}
