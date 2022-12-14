#include <stdio.h>
/**
 *  _strcpy - a function that copies the string pointed to by src,
 *  including the terminating null byte (\0),
 *  to the buffer pointed to by dest.
 *
 *  @dest: the destination string
 *  @src: the source string
 *
 *  Return: pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i, l;

	{
		for (i = 0; src[i] != '\0'; i++)
			l = i + 1;
		if (l <= 0)
			i = 0;
		else
		{
			for (i = 0; i <= l; i++)
				dest[i] = src[i];
		}
	}
	return (dest);
}

