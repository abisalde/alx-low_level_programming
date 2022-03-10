#include <stdio.h>

/**
 *	main - Print various size of various types
 *	Description: This program prints size of various types on computer
 *	that is run on
 *	Return: 0
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(double));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
