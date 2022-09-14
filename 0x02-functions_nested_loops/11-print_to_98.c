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
	int i;
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			while (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}


	else if (n == 98)
		printf("%d\n", n);


	else
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			while (i != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
