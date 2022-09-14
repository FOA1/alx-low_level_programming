#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Receives a number and prints it to 98
 *
 * @n: The number to start with
 *
 * Return: Always Success
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			while (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
		_putchar('\n');
	}

	else if (n == 98)
		printf("%d\n", n);

	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			while (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
		_putchar('\n');
	}
}
