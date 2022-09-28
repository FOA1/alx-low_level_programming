#include "main.h"
/**
 * _puts_recursion - prints string using recursion
 *
 * @s: the string to print
 *
 */
void _puts_recursion(char *s)
{
	if (!*s)
		_putchar('\n');
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}


}
