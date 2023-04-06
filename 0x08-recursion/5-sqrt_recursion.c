#include "main.h"
/**
 * sqrt2 - Makes possible to evaluate from 1 to n
 * @n: same number as n
 * @i: number that iterates from 1 to n
 *
 * Return: On success 1.
 */
int sqrt2(int n, int i)
{
if (i * i > n)
return (-1); /*The square root of n does not exist.*/
if (i * i == n)
return (i); /* i is the square root of n.*/
return (sqrt2(n, i + 1)); /* Try the next integer value.*/

}
/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _sqrt_recursion(int n)
{
return (sqrt2(n, 1));
}

