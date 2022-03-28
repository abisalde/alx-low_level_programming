#include "main.h"

/**
 * _strspn - Gets the length of a prefix string
 * @s: initial segment
 * @accept: accept bytes character
 * Return: int Always (0)
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, chain = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				chain++;
				break;
			}
		}
		if (accept[j] == '\0')
		{
			break;
		}
	}
	return (chain);
}
