#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * strtow - Splits a string into words.
 *
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **words = NULL;
	int word_count = 0;
	int word_index = 0;
	int word_length = 0;
	int i, j;

	if (str == NULL || strcmp(str, "") == 0)
	{
		return (NULL);
	}

	/* Count the number of words in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			continue;
		}

		word_count++;

		while (str[i] != ' ' && str[i] != '\0')
		{
			i++;
		}
	}

	if (word_count == 0)
	{
		return (NULL);
	}

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			if (word_length > 0)
			{
				words[word_index] = malloc((word_length + 1) * sizeof(char));
				if (words[word_index] == NULL)
				{
					for (int j = 0; j < word_index; j++)
					{
						free(words[j]);
					}
					free(words);
					return (NULL);
				}
				strncpy(words[word_index], str + i - word_length, word_length);
				words[word_index][word_length] = '\0';
				word_index++;
				word_length = 0;
			}
			continue;
		}

		word_length++;
	}

	if (word_length > 0)
	{
		words[word_index] = malloc((word_length + 1) * sizeof(char));
		if (words[word_index] == NULL)
		{
			for (j = 0; j < word_index; j++)
			{
				free(words[j]);
			}
			free(words);
			return (NULL);
		}
		strncpy(words[word_index], str + strlen(str) - word_length, word_length);
		words[word_index][word_length] = '\0';
		word_index++;
	}

	words[word_index] = NULL;

	return (words);
}

