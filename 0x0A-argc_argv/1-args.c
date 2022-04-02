#include <stdio.h>

/**
 * main - programs that prints the number of arguments
 * passed into it followed by a new line
 * @argc: integer
 * @argv: the list
 * Return: (0)
 */

int main(int argc, char const *argv[])
{
	(void)argv;

	printf("%i\n", argc - 1);

	return (0);
}
