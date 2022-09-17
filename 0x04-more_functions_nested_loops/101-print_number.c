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
		l_num = -1 * l_num;
	}

	if (l_num == 0)
		_putchar('0');

	if (l_num / 10)
		print_l(l_num / 10);

	if (l_num != 0)
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
