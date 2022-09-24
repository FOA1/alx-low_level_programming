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
	if (num < 0)
		num = -num;

	_putchar((num % 10) + '0');


	return (num % 10);
}
