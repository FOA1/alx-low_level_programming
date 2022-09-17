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
		l_num = -l_num;
	}

	if (l_num == 0)
		_putchar('0');

	if (l_num / 10)
		print_l(l_num / 10);

	if (l_num != 0)
		_putchar(l_num % 10 + '0');
}
/**
 * print_times_table - Write a function that prints multiplication
 * table n. starting from 0.
 *
 * @n: the number to check
 *
 * Return: Always Success
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, product, next_pro;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				if (product > 9)
					print_l(product);
				else
					_putchar((product % 10) + '0');
				if (j == n)
					continue;

				_putchar(',');
				_putchar(' ');
				next_pro = i * j + 1;

				if (next_pro < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (next_pro >= 10 && next_pro < 100)
					_putchar(' ');
				else
					continue;
			}
			_putchar('\n');
		}
	}

	else
		_putchar('\n');
}
