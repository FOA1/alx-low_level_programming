#include "main.h"
/**
 * _puts - a function that prints a string,
 * followed by a new line, to stdout
 *
 * @str: the string to print
 */
void _puts(char *str)
{
	int l, i;

	if (str[0] == ('\0'))
		_putchar('\n');
	else
	{
		for (i = 0; str[i] != '\0'; i++)
			l = i + 1;
		for (i = 0; i < l; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
