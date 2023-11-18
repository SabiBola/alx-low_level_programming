#include "main.h"

/**
 * main - a program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	int i, j, num, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);

		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
