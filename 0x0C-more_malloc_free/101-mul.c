#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_digit(char c);
int multiply(char *num1_str, char *num2_str);
void reverse(char *str, int len);
void int_to_str(int num, char *str);
void print_error(void);

/**
 * is_digit - checks if a character is a digit
 * @c: the character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * multiply - multiplies two positive numbers and returns the result
 * @num1_str: a string representing the first number
 * @num2_str: a string representing the second number
 *
 * Return: the product of num1 and num2
 */
int multiply(char *num1_str, char *num2_str)
{
	int num1_len = strlen(num1_str);
	int num2_len = strlen(num2_str);

	int num1 = atoi(num1_str);
	int num2 = atoi(num2_str);

	return (num1 * num2);
}

/**
 * reverse - reverses a string in place
 * @str: the string to reverse
 * @len: the length of the string
 */
void reverse(char *str, int len)
{
	int i = 0, j = len - 1;

	while (i < j)
	{
		char temp = str[i];

		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}

/**
 * int_to_str - converts an integer to a string
 * @num: the integer to convert
 * @str: the buffer to store the resulting string
 */
void int_to_str(int num, char *str)
{
	int i = 0;

	while (num != 0)
	{
		str[i++] = (num % 10) + '0';
		num /= 10;
	}

	str[i] = '\0';

	reverse(str, i);
}

/**
 * print_error - prints an error message to stdout
 */
void print_error(void)
{
	char *msg = "Error\n";
	int len = strlen(msg);

	for (int i = 0; i < len; i++)
	{
		putchar(msg[i]);
	}
}

/**
 * main - multiplies two positive numbers
 * @argc: the number of command-line arguments
 * @argv: an array of command-line argument strings
 *
 * Return: 0 if successful, 98 if error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error();
		return (98);
	}

	char *num1_str = argv[1];
	char *num2_str = argv[2];

	int num1_len = strlen(num1_str);
	int num2_len = strlen(num2_str);

	for (int i = 0; i < num1_len; i++)
	{
		if (!is_digit(num1_str[i]))
		{
			print_error();
			return (98);
		}
	}

	for (int i = 0; i < num2_len; i++)
	{
		if (!is_digit(num2_str[i]))
		{
			print_error();
			return (98);
		}
	}

	int result = multiply(num1_str, num2_str);

	if (result == 0)
	{
		putchar('0');
		putchar('\n');
		return (0);
	}
}
