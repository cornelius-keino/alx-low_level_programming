#include "main.h"
/**
 * palind2 - obtains length of a
 * @s: string
 * @l: integer to count length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int palind2(char *s, int l)
{
if (s[l] != '\0')
return (palind2(s, l + 1));
return (l - 1);
}
/**
 * palind3 - compares string vs string reverse
 * @s: string
 * @l: length
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int palind3(char *s, int l)
{
if (*s != s[l])
return (0);
if (*s == '\0')
return (1);
return (palind3(s + 1, l - 1));
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_palindrome(char *s)
{
int l;

l = palind2(s, 0);
return (palind3(s, l));
}

