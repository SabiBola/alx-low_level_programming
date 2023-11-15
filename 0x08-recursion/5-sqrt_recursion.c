#include "main.h"

/**
 * find_sqrt - recurses
 * @n: the number
 * @i: iterator
 * Return: the square root
 */
int find_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural sqrt of a num
 * @n: the number
 * Return: the natural sqrt of a num
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 0));
}
