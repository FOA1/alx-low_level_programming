#include "main.h"
/**
 * _strncpy - Write a function that copy one string to another
 *
 * @dest: the destination string
 * @src: the source  string
 * @n: the number of characters to copy
 *
 * Return: the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, lenSrc = 0, lenDest = 0;

	for (i = 0; src[i] != '\0'; i++)
		lenSrc = i + 1;
	for (i = 0; dest[i] != '\0'; i++)
		lenDest = i + 1;

	if (lenSrc < 0 || n < 0)
		return (dest);
	else
	{
		if (lenDest < n)
			return (dest);
		for (i = 0; i < n && src[i] != '\0'; i++)
		{
			dest[i] = src[i];
		}
	}
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
