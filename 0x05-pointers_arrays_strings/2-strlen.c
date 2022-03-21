#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to string check
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
