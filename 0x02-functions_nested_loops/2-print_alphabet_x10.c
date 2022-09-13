#include "main.h"
/**
 * print_alphabet_x10 - Write a function that prints the alphabet,
 * in lowercase, multiplied it by 10, followed by a new line.
 *
 * Return: Always Success
 */
void print_alphabet_x10(void)
{
	char count;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (count = 'a'; count <= 'z'; count++)
		{
		_putchar(count);
		}
	_putchar('\n');
	}
}
