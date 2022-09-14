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
		_putchar(((_abs(num)) % 10) + '0');

	return (0);
}
