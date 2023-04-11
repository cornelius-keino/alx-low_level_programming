#include "main.h"
#include <stdlib.h>
/**
  * create_array - create array of characters
  * @size: size of array to be created
  * @c: character to initialize the array with
  * Return: pointer to array
  */
char *create_array(unsigned int size, char c)
{
char *array;
unsigned int i;

array = (char *) malloc(size * sizeof(char));

if (array == NULL)
return (NULL);

for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
