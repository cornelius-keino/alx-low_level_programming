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
size_t len1, len2, len_concat;
char *concat;

len1 = strlen(s1);
len2 = strlen(s2);
len_concat = len1 + len2;

concat = malloc(sizeof(char) * (len_concat + 1));

if (concat == NULL)
return (NULL);

memcpy(concat, s1, len1);
memcpy(concat + len1, s2, len2 + 1);

return (concat);
}
