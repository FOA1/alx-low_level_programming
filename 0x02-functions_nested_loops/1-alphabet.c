#include "main.h"
/**
 * print_alphabet - Write a function that prints the alphabet,
 * in lowercase, followed by a new line.
 *
 * Return: Always Success
 */
void print_alphabet(void)
{
	char count;

	for (count = 'a'; count <= 'z'; count++)
	{
		_putchar(count);
	}

	_putchar('\n');
}
