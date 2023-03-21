#include "main.h"
/**
 * _islower - accepts intenger parameter c
 * @c: accepts int data type
 *
 * Description: 'test if it is a character'
 *
 * Return: int
 */
int _islower(int c)
{
	int c;

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


