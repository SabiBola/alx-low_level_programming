#include "main.h"

int palindrome(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - Entry point
 * @s: string to be checked
 * Return: 1 if string is a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome - check for palindrome
 * @s: string
 * @i: iterator
 * @len: length of string
 * Return: 1 if string is palindrome and 0 if otherwise
 */
int palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (palindrome(s, i + 1, len - 1));
}
