#include "main.h"

/**
 * print_rev - prints a string, in reverese
 * @s: string as the pointer
 * Return: Always (0) Success
 */

void print_rev(char *s)
{
	int i;

	while (s[i])
		i++;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
