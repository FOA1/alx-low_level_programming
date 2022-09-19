#include "main.h"
/**
 * print_rev - a function that prints a string in reversed order,
 * followed by a new line, to stdout
 *
 * @s: the string to print
 */
void print_rev(char *s)
{
	int l, i;

	for (i = 0; s[i] != '\0'; i++)
		l = i + 1;

	if (l == 0)
		_putchar('\n');
	else
	{
		for (i = l - 1; i >= 0; i--)
			_putchar(s[i]);
		_putchar('\n');
	}
}

