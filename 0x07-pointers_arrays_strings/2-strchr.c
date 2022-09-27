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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		++s;
	}
	return ('\0');
}
