#include "main.h"
/**
 * _strncpy - concatanates two srings with specific characters
 * @dest: destination string
 * @src: source string
 * @n: number of strings from source
 * Return: the concatanated string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for (; i < n; i++)
dest[i] = '\0';

return (dest);

}

