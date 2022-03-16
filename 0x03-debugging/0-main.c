#include "main.h"
/**
 *	main - tests function that prints if integer is positive or negative
 *	Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;
	positive_or_negative(i);
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);

	return (0);
}
