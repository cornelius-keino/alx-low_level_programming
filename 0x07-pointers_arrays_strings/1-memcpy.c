#include "main.h"
/**
 * _memcpy - copy n number of bytes from src to dest
 * @dest: bytes at destination memory area
 * @src: bytes from source memory area
 * @n: number of bytes to copy
 * Return: character
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

