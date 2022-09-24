#include "main.h"
/**
 * print_last_digit - Write a function that prints
 * the remainder of a number.
 *
 * @num: The number to check
 *
 * Return: zero.
 */

int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
		last_digit = - (num % 10) + '0';
	else
		last_digit = (num % 10) + '0';

	_putchar(last_digit);
	return (last_digit - '0');
}
