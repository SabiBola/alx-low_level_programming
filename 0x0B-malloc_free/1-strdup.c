#include "main.h"

/**
 * *_strdup - a func that returns a pointer to a newly
 * allocated space in memory
 * @str: the pointer
 *
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *dup;

	if (str == NULL)
	{
		return (NULL);
	}
	dup = (char *) malloc((strlen(str) + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}
	strcpy(dup, str);
	return (dup);
}
