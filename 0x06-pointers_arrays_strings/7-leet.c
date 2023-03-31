#include "main.h"
/**
 * leet - convert to number
 * @s: array of characters
 * Return: the result
 */
char *leet(char *s)
{
int i, j;
char small[] = {'a', 'e', 'o', 't', 'l', '\0'};
char capital[] = {'A', 'E', 'O', 'T', 'L', '\0'};
char numbers[] = {'4', '3', '0', '7', '1', '\0'};

for (i = 0; s[i] != '\0'; ++i)
{
for (j = 0; j < 5; j++)
{
if (s[i] == small[j] || s[i] == capital[j])
{
s[i] = numbers[j];
}
}
}
return (s);
}
