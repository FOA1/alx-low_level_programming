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
	int abs_num;
	int rem;

	if (num < 0)
	{
		abs_num = -num;
		rem = abs_num%10;
		_putchar(rem);
	}
	else
	{
		rem = abs_num%10;
		_putchar(rem);
	}

	return (0);
}
