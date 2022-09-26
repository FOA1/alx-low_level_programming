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
	int i = 0, len = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	if (len < 1)
		i = 0;
	else
	{
		while (*s)
		{
			if (*s == c)
				return (char *)s;
			++s;
		}
	}
	return (0);
}
