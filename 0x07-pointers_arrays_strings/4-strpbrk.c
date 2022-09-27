#include "main.h"

/**
 * _strpbrk - gets lengthof a prefix substring
 * @s: string to check
 * @accept: string to check against
 *
 * Return: the first match
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}
