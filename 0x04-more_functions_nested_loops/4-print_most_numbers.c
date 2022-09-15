#include "main.h"

/**
 * main - Prints all single digit numbers
 * starting from 0 in base 10
 *
 * Return: Always 0.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
			continue;
		_putchar((i % 10) + '0');
	}

	_putchar('\n');
}
