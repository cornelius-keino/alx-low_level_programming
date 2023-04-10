#include "main.h"
/**
 * _strchr - sttring character
 * @s: string pointer
 * @c: character to test
 * Return: character
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return (s);
}
return (0);
}
