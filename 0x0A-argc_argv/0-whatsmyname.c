#include "main.h"

/**
 * main - a program that prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
