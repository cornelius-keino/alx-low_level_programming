#include "main.h"
/**
 * _memset - fill n bytes with byte b
 * @s: pointing to memory area
 * @b: constant byte to fill a give size of bytes in memory
 * @n: number of bytes to fill
 * Return: character
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
