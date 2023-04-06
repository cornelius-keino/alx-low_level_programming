#include "main.h"
/**
 * prime2 - Makes possible to evaluate from 1 to n
 * @n: same number as n
 * @i: number that iterates from 1 to n
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int prime2(int n, int i)
{
if (i == n)
return (1);
if (n % i == 0)
return (0);
return (prime2(n, i + 1));
}
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (prime2(n, 2));
}

