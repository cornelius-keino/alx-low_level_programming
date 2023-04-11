#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * _strdup - duplicate a string
  * @str: string to be duplicated
  *
  * Return: a copy of the string
  */
char *_strdup(char *str)
{
if (str == NULL) /* handle NULL input */
{
return (NULL);
}
size_t len = strlen(str) + 1; /* compute string length */
char *copy = malloc(len); /* allocate memory */
if (copy == NULL) /* handle allocation failure */
{
return (NULL);
}
memcpy(copy, str, len); /* copy string */
return (copy); /* return pointer to copy */
}

