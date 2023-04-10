#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * count_coins - count the number of coins
 *@cents: cents to test
 *Return: result
 */
int count_coins(int cents)
{
if (cents < 0)
{
return (0);
}

int coin_counts[] = {0, 0, 0, 0, 0}; /*25, 10, 5, 2, 1 cent coins*/

while (cents > 0)
{
if (cents >= 25)
{
cents -= 25;
coin_counts[0]++;
}
else if (cents >= 10)
{
cents -= 10;
coin_counts[1]++;
}
else if (cents >= 5)
{
cents -= 5;
coin_counts[2]++;
}
else if (cents >= 2)
{
cents -= 2;
coin_counts[3]++;
}
else
{
cents -= 1;
coin_counts[4]++;
}
}
return (coin_counts[0] + coin_counts[1] + coin_counts[2] +
	coin_counts[3] + coin_counts[4]);
}
/**
 * main - entry point of the program
 *@argc: number of command line arguments passed
 *@argv: array of string containing command line  arguments
 *Return: 0 on success
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error\n");
return (1);
}

int cents = atoi(argv[1]);

printf("%d\n", count_coins(cents));

return (0);
}


