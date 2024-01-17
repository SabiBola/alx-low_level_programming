#include "main.h"

/**
 * *str_concat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *result;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}

	result = (char *) malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strcpy(result, s2);
	return (result);
}
