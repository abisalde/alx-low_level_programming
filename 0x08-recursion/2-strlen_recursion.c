#include "main.h"

/**
 * _strlen_recursion - Prints the length of a string
 * @s: pointer to string character
 * Return: Always success (0)
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s > '\0')
	{
		n += _strlen_recursion(s + 1) + 1;
	}

	return (n);
}
