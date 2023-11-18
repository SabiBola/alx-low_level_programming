#include "main.h"

/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 on success
 */
int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if (argc > 1)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
