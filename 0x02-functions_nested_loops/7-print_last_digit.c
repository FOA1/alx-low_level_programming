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
	if (num > 0)
	{
		num = ((num % 10) + '0');
		_putchar(num);
	}
	else if (num == 0)
	{
		_putchar('0');
	}
	else
	{
		num = -num;
		num = ((num % 10) + '0');
		_putchar(num);
	}


	return (num);
}
