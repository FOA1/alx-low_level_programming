#include <stdio.h>
/**
 *  _atoi - a function that copies the string pointed to by src,
 *  including the terminating null byte (\0),
 *  to the buffer pointed to by dest.
 *
 *  @s: the passed character
 *
 *  Return: pointer to the destination string
 */
int _atoi(char *s)
{
	int i, l;

	{
		for (i = 0; s[i] != '\0'; i++)
			l = i + 1;
		if (l <= 0)
			i = 0;
		else
		{
			for (i = 0; i <= l; i++)
				s[i] = s[i] + 32;
		}
	}
	return (0);
}

