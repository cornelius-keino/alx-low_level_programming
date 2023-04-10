#include "main.h"
/**
 * _strncat - concatanates two srings with specific characters
 * @dest: destination string
 * @src: source string
 * @n: number of strings from source
 * Return: the concatanated string
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int i;

for (i = 0; dest[i] != '\0'; i++)
dest_len++;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[dest_len + i] = src[i];

return (dest);

}
