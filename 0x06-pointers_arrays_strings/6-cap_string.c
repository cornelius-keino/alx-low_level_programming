#include "main.h"
/**
 * cap_string - converts each word to capital letter
 * @s: array of characters
 * Return: the result
 */
char *cap_string(char *s)
{
int conversion, i, count;

char chars[] = {' ', ',', ';', '.', '!',
		 '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
conversion = 32;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] =  s[i] - conversion;
}
conversion = 0;
for (count = 0; chars[count] != '\0'; count++)
{
if (chars[count] == s[i])
{
conversion = 32;
break;
}
}
}
return (s);
}
