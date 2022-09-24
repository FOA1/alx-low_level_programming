#include "main.h"
/**
 * print_l - prints long integers using _putchar
 * @l_num: The integer to print
 * Return: Nothing
 */

void print_l(int l_num)
{
	if (l_num / 10)
		print_l(l_num / 10);
	_putchar(l_num % 10 + '0');
}

/**
 * print_times_table - Write a function that prints multiplication
 * @n: the number to Multiply
 * Return: Nothing
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (product < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((product % 10) + '0');
				}
				else if (product > 9 && product < 100)
				{
					_putchar(' ');
					print_l(product);
				}
				else
					print_l(product);
			}
			_putchar('\n');
		}
	}
	else
		i = 0;
}
