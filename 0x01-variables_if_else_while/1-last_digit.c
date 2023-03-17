#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: 'positive and negative'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (last_digit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n");
	}
	else if (last_digit == 0)
	{
	printf("Last digit of %d is %d and is 0\n");
	}
	else if (last_digit < 6 && last_digit != 0)
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n");
	}
	else
	{
	printf("No digit generated\n");
	}
	return (0);
}
