#include "main.h"
/**
 * _strcat - Convatenates two strings
 *
 * @dest: the destination string
 * @src: the source string
 * @n: the number of characters to copy
 *
 * Return: the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, len_src = 0, len_dest = 0;

	for (i = 0; src[i] != '\0'; i++)
		len_src = i + 1;

	if (len_src <= 0)
		i = 0;
	else
	{
		for (i = 0; dest[i] != '\0'; i++)
			len_dest = i + 1;
		for (i = 0; i < n; i++)
		{
			dest[len_dest + i] = src[i];
		}
	}

	return (dest);
}
