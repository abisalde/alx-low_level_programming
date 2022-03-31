#include "main.h"

/**
 * is_prime_number - print prime number
 * @n: integer
 * Return: (0) or (1)
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n if they can divide it
 * @n: integer
 * @checker: checker
 * Return: (0) or (1)
 */

int check_prime(int n, int checker)
{

	if (checker >= n && n > 1)
	{
		return (1);
	} else if (n % checker == 0 || n <= 1)
	{
		return (0);
	}
	return (check_prime(n, checker + 1));
}
