#include "main.h"
/**
 * print_long - prints lomg integers using _putchar
 *
 * @long_num: The integer to print
 * Return: Always success
 */

void print_long(int long_num)
{
	if (long_num < 0)
	{
		_putchar('-');
		long_num = -long_num;
	}

	if (long_num == 0)
		_putchar('0');

	if (long_num / 10)
		print_long(long_num / 10);

	if (long_num != 0)
		_putchar(long_num % 10 + '0');
}

/**
 * print_number - takes input and call the funtion
 * print_long to print long integers
 *
 * @n: the number to print
 */

void print_number(int n)
{
	print_long(n);
}
