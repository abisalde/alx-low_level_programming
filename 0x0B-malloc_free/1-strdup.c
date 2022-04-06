#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str: pointer string
 * Return: (0)
 */

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *alloc;

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[size] != '\0'; size++)
	;

	/* puts the end of strinf character on +1 */
	alloc = malloc(size * sizeof(*str) + 1);

	if (alloc == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			alloc[i] = str[i];
	}
	return (alloc);
}
