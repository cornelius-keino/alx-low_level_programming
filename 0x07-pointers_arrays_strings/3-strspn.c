#include "main.h"
/**
 * _strspn - get the length of a prefix
 * @s: string pointer
 * @accept: character to test
 * Return: the number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
break;
}
if (accept[j] == '\0')
break;
}
return (i);
}
