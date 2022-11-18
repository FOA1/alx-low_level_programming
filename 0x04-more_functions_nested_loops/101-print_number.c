#include "main.h"
/**
 * print_l - prints long integers using _putchar
 *
 * @l_num: The integer to print
 * Return: Always success
 */

void print_l(int l_num)
{
	if (l_num < 0)
	{
		_putchar('-');
		if (l_num / 10)
			 print_l(l_num / 10);
		_putchar('0' - l_num % 10);
	}

	else if (l_num == 0)
		_putchar('0');

	else
	{
		if (l_num / 10)
			print_l(l_num / 10);
		_putchar(l_num % 10 + '0');
	}
/**
 * print_number - takes input and call the funtion
 * print_long to print long integers
 *
 * @n: the number to print
 */

void print_number(int n)
{
	print_l(n);
}
