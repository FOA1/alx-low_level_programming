#include "main.h"
/**
 * _strchr - fills memory with a constant byte.
 *
 * @s: the string to search
 * @c: the char we are searching for
 *
 * Return: pointer to the first occurrence of the char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
			return (s + i);
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);
}
