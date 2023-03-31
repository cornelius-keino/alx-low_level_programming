#include "main.h"
/**
 * rot13 - Write a function that encodes a string using rot13
 *
 * @c: This is my input string
 *
 * Return: String converted to rot13
 *
 */
char *rot13(char *c)
{
int i, j;

char a_z[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char n_m[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; c[i] != '\0'; i++)
{
for (j = 0; a_z[j] != '\0' ; j++)
{
if (c[i] == a_z[j])
{
c[i] = n_m[j];
break;
}
}
}
c[i] = '\0';
return (c);
}
