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
/* Return NULL if size is 0 */
if (size == 0)
{
return (NULL);
}

/* Allocate memory for the array */
char *array = (char *) malloc(size * sizeof(char));

/* Check if memory allocation was successful */
if (array == NULL)
{
return (NULL);
}

/* Initialize each element of the array with the given char */
for (int i = 0; i < size; i++)
{
array[i] = c;
}

/* Return a pointer to the array */
return (array);
}

