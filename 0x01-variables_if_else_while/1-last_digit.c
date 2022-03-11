#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 *	main - Program will assign a random number to the variable
 *	Description: The string Last digit of, followed by
 *	the string is, followed by
 *	if the last digit of n is greater than 5: the string and is greater than 5
 *	if the last digit of n is 0: the string and is 0
 *	if the last digit of n is less than 6 and not 0
 *	the string and is less than 6 and not 0
 *	followed by a new line
 *	Return: (0)
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n, last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;
	if (last > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, last);
	else if (last == 0)
		printf("Last digit of %d is %d and is 0\n", n, last);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);

	return (0);
}
