#include "main.h"
/**
 * reverse_array - compares two strings
 * @a: array
 * @n: number of elements
 * Return: the result
 */
void reverse_array(int *a, int n)
{
int i, last;

last = n - 1;
for (i = 0; i < n / 2; i++)
{
int start, end;

start = a[i];
end = a[last];
a[i] = end;
a[last] = start;
last--;
}
}
