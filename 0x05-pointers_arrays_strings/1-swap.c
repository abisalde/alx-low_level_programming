#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: pointers a
 * @b: pointers b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
