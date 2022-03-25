#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to be appended to
 * @src: string whose contents to append to src
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *new_dest = dest;

	/* navigate to the end of dest */
	while (*dest)
		dest++;

	/* copy all characters of src to dest */
	while (*src)
		*dest++ = *src++;

	/* add terminating null byte */
	*dest = '\0';

	return (new_dest);
}

