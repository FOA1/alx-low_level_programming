#include "main.h"
/**
 * rev_string - a function that reversed a string,
 * And prints it to stdout
 * @s: the string to print
 */
void rev_string(char *s)
{
	int l, i, temp;

	for (i = 0; s[i] != '\0'; i++)
		l = i + 1;
	if (s[0] == '\0')
		i = 0;
	else
	{
		for (i = 0; i < l / 2; i++)
		{
			temp = s[i];
			s[i] = s[l - 1 - i];
			s[l - 1 - i] = temp;
		}
	}
}

