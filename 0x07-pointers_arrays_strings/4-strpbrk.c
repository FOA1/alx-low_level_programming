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
	/*unsigned int i = 0, j = 0;*/

	for (; *s != '\0'; s++)
	{
		for (; *accept != '\0'; accept++)
		{
			if (s == accept)
				break;
		}
		if (accept)
			return (s);
	}
	return (0);
}
