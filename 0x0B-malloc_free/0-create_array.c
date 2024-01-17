#include "main.h"

/**
 * *create_array - a func that creates an array of chars
 * and initializes it with a specific char
 * @size: size of the array
 * @c: specific char
 *
 * Return: a pointer to the array or NULL if fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *) malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
