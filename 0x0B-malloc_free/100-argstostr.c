#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  * argstostr - cancatenate strings passed to arguments
  * @ac: number of arguments
  * @av: arguments passed
  * Return: pointer to concatenated string
  */
char *argstostr(int ac, char **av)
{
size_t total_length = 0;
size_t offset = 0;
char *str;
int i;

if (ac == 0 || av == NULL)
{
return (NULL);
}

/* Compute the total length of the concatenated string */
for (i = 0; i < ac; i++)
{
total_length += strlen(av[i]) + 1; /* Add 1 for the newline character */
}

/* Allocate memory for the concatenated string */
str = malloc((total_length + 1) * sizeof(char));
if (str == NULL)
{
return (NULL);
}

/* Copy the arguments to the concatenated string */
for (i = 0; i < ac; i++)
{
strcpy(str + offset, av[i]);
offset += strlen(av[i]);
str[offset++] = '\n';
}
str[offset] = '\0'; /* Add null terminator */

return (str);
}
