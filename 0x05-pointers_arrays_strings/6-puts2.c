#include "main.h"
/**
 *  puts2 - a function that prints the strings
 *  in even number position,
 *  @str: the string to print
 */
void puts2(char *str)
{
	int l, i;

	for (i = 0; str[i] != '\0'; i++)
		l = i + 1;
	for (i = 0; i < l; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
