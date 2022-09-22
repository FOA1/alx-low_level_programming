#include "main.h"
/**
 * cap_string - converts strings from lower to upper case
 *
 * @p: the string to convert
 *
 * Return: the string p.
 */
char *cap_string(char *p)
{
	int i;

	if (p[0] >= 'a' && p[0] <= 'z')
		p[0] = p[0] - 32;

	for (i = 1; p[i] != '\0'; i++)
	{
		if (p[i] == ' ' || p[i] == '.' || p[i] == ','
				|| p[i] == '\t' || p[i] == '\n')
		{
			if (p[i + 1] >= 'a' && p[i + 1] <= 'z')
				p[i + 1] = p[i + 1] - 32;
		}
	}
	return (p);
}
