#include "main.h"

/**
 * _print_rev_recursion - Prints a string on reverse
 * @s: pointer to string character
 * Return: void (0)
 */

void _print_rev_recursion(char *s)
{
	if (*s > '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
