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
	if (num >= 0)
		_putchar((num % 10) + '0');
	else
		_putchar((-num % 10) + '0');

	return (0);
}
