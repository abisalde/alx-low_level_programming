#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *	main - Program will assign a random number to the variable n
 *	Description: program will assign a random number to the variable n each
 *	time it is executed, The variable n will store a different value every
 *	time you will run this program
 *	if the number is greater than 0: is positive
 *	if the number is 0: is zero
 *	if the number is less than 0: is negative
 *	Return: (0)
 *
 *
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is postive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
