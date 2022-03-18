#include "main.h"

/**
 * print_line - functions that draw a straight line
 * @n: is the number of times the character
 * Return: (0)
 */

void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
