#include "main.h"
/**
 * string_toupper - converts the string to upper case
 * @s: array of characters
 * Return: the result
 */
char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
s[i] = s[i] - 32;
}
return (s);
}

