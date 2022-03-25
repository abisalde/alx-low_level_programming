#include "main.h"

/**
* reverse_array - reverses the content of an array of size n
* @a: array to be reversed
* @n: number of elements in the array
*/
void reverse_array(int *a, int n)
{
	int i;
	int def_i;
	int tmp;

	for (i = 0; i < (n / 2); i++)
	{
		def_i = n - (i + 1);
		tmp = a[i];
		a[i] = a[def_i];
		a[def_i] = tmp;
	}
}
