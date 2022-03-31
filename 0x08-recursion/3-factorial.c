#include "main.h"

/**
 * factorial - factorial of a given number
 * @n: the integer
 * Return: (0) or (1)
 */

int factorial(int n)
{

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
