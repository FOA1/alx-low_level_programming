#include "main.h"
/**
 *  puts_half - a function that prints the strings
 *  in even number position,
 *  @str: the string to print
 */
void puts_half(char *str)
{
	int l, i, n;

	for (i = 0; str[i] != '\0'; i++)
		l = i + 1;
	if (str[0] == '\0')
		_putchar('\n');
	else
	{
		if (l % 2 == 0)
		{
			for (i = l / 2; i < l; i++)
				_putchar(str[i]);
			_putchar('\n');
		}
		else
		{
			n = (l - 1) / 2;
			for (i = n + 1; i < l; i++)
				_putchar(str[i]);
		 	_putchar('\n');
		}
	}
}
