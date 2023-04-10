#include "main.h"
/**
 * _strpbrk - search for a string of any set of bytes
 * @s: string pointer
 * @accept: character to test
 * Return: character
 */
char *_strpbrk(char *s, char *accept)
{
int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (accept[j] != '\0')
return (s);
}
return (0);
}
