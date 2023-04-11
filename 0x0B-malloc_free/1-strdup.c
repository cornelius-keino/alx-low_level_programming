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
char *dup;
size_t len;

len = strlen(str) + 1; /* compute string length */
dup = malloc(sizeof(char) * len);

if (dup == NULL)
return (NULL);

memcpy(dup, str, len);

return (dup);
}
