#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	print_alphabet();
	return (0);
}

/**
* print_alphabet - printing of alphabet in lowercase
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
	_putchar('\n);
}
