#include "main.h"

/**
 * _pow_recursion - power of a number
 * @x: value
 * @y: the exponential value
 * Return: (0) or (-1)
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	} else if (y == 1)
	{
		return (x);
	} else if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
