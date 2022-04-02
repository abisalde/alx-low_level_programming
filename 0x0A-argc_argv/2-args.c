#include <stdio.h>

/**
 * main - program that print all arguments it receive
 * @argc: integer
 * @argv: the list
 * Return: (0)
 */

int main(int argc, char const *argv[])
{
	int i;

	for (i = 0; i < argc - 1; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
