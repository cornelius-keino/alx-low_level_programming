#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * str_concat - concatenate two strings
  * @s1: first string
  * @s2: second string
  * Return: concatenated string
  */
char *str_concat(char *s1, char *s2)
{
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}

size_t len1 = strlen(s1);
size_t len2 = strlen(s2);
char *result = malloc(len1 + len2 + 1); /* +1 for null terminator */
if (result == NULL)
{
return (NULL);
}
memcpy(result, s1, len1);
memcpy(result + len1, s2, len2 + 1); /* +1 for null terminator */
return (result);
}
