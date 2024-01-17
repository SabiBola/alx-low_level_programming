#include "main.h"

/**
 * *argstostr - a func that concatenates all
 * the arguments of your program
 * @ac: argument 1
 * @av: argument 2
 *
 * Return: a pointer to a new str or NULL if fails
 */
char *argstostr(int ac, char **av)
{
	int total_length;
	char *result;
	int position;
	int i;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	total_length = 0;

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			total_length += strlen(av[i]) + 1;
		}
	}
	result = (char *) malloc((total_length + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	position = 0;

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			strcpy(result + position, av[i]);
			position += strlen(av[i]);
			result[position++] = '\n';
		}
	}
	result[position] = '\0';
	return (result);
}
