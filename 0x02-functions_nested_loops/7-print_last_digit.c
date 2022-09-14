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
	int abs, rem;

	if (num < 0)
	{
		abs = (-num);
		rem = (abs%10);
		_putchar(rem);
	}
	else
	{
		rem = (abs%10);
		_putchar(rem);
	}

	return (0);
}
