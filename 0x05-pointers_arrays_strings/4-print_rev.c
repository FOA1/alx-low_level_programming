#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints string in reverse
 *
 * @s: the required string to print
 * Return: Nothing
 */
void print_rev(char *s)
{
	unsigned int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	s--;
	while (len > 0)
	{
		_putchar(*s);
		s--;
		len--;
	}
	_putchar('\n');
}
