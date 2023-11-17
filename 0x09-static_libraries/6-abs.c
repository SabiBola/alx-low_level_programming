#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @b: the int to check
 * Return: the absolute value of int
 */
int _abs(int b)
{
	if (b < 0)
	{
	int abs_val;

	abs_val = b * -1;
	return (abs_val);
	}
	return (b);
}
