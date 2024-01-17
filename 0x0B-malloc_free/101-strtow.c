#include "main.h"

/**
 * is_space - helper func checks if a char
 * is a space, tab or newline
 * @c: char to be checked
 *
 * Return: c.
 */
int is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
	{
		return (c);
	}
	return (c);
}

/**
 * count_words - helper func counts words
 * @str: string
 *
 * Return: count
 */
int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str != '\0')
	{
		if (is_space(*str))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * **strtow - a funct that splits a str into two words
 * @str: the str
 *
 * Return: NULL if str == NULL or str == " "
 */
char **strtow(char *str)
{
	int num_words, current_word, word_length, i;
	char **result;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	num_words = count_words(str);

	result = (char **) malloc((num_words + 1) * sizeof(char *));
	if (result == NULL)
	{
		return (NULL);
	}

	current_word = 0;
	word_length = 0;

	while (*str != '\0')
	{
		if (!is_space(*str))
		{
			word_length++;
		}
		else if (word_length > 0)
		{
			result[current_word] = (char *) malloc((word_length + 1) * sizeof(char));
			if (result[current_word] == NULL)
			{
				for (i = 0; i < current_word; i++)
				{
					free(result[i]);
				}
				free(result);
				return (NULL);
			}
			strncpy(result[current_word], str - word_length, word_length);
			result[current_word][word_length] = '\0';
			current_word++;
			word_length = 0;
		}
		str++;
	}
	if (word_length > 0)
	{
		result[current_word] = (char *) malloc((word_length + 1) * sizeof(char));
		if (result[current_word] == NULL)
		{
			for (i = 0; i <= current_word; i++)
			{
				free(result[i]);
			}
			free(result);
			return (NULL);
		}
		strncpy(result[current_word], str - word_length, word_length);
		result[current_word][word_length] = '\0';
		current_word++;
	}
	result[current_word] = NULL;
	return (result);
}
