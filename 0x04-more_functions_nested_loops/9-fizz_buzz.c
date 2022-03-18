#include <stdio.h>

/**
 * main - fizzbuzz interview to filter
 * Description: program that prints numbers 1 to 100
 * multiples of three Fizz instead of the number
 * multiples of five Buzz instead of the number
 * multiples of both three and five print FizzBuzz
 * Return: (0)
 */

int main(void)
int main(void)
{

	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", i);
		}

		if (i != 100)
		{
			putchar(' ');
		}

		i++;
	}
	putchar('\n');
	return (0);


