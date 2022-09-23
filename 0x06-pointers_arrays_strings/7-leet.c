#include "main.h"
/**
 * leet - converts 'A', 'E', 'O', 'T', 'L' in a string to
 * numbers '4', '3', '0', '7', '1'
 *
 * @p: the string to convert
 *
 * Return: the string p.
 */
char *rot13(char *p)
{
	int i, j;
	char check[] = "ABCDEFGHIJKLM";
	char rep[] = "NOPQRSTUVWXYZ"

	for (i = 0; i < 13; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (p[i] == check[j] || p[i] == check[j] + 32)
				p[i] = rep[j];
		}
	}
	return (p);
}
