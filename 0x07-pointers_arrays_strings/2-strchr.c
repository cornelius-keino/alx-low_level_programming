#include "main.h"
/**
 * _strchar - sttring character
 * @s: string pointer
 * @c: character to test
 * Return: character
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] <= '\0'; i++)
{
if (s[i] == c)
{
return (s);
}
else
{
return (0);
}
}
}
