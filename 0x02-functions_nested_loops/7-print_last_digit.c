#include "main.h"
/**
 * print_last_digit - Write a function that prints
 * the remainder of a number.
 *
 * @num: The number to check
 *
 * Return: Always Success.
 */

int print_last_digit(int num)
{
	int i;
	if (num >= 0)
	{
		i = ((num % 10) + '0');
		_putchar(i);
	}
	else
	{
		i = -num;
		i = ((i % 10) + '0');
		_putchar(i);
	}


	return (i);
}
