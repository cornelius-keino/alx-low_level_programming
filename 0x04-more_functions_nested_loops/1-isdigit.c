#include "main.h"
/**
 * _isdigit - check if character is a digit
 * @c: variable to cheked if digit
 *
 * Return: 1 or 0 depending with statement
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
