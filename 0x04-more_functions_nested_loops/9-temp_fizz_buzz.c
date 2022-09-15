#include "main.h"

/**
 * fizz_buzz - Prints Numbers from 1 to 100.
 * when it encounter multiples of 3, it prints fizz,
 * and buzz for multiples of 5.
 *
 * Return: Always 0.
 */
void fizz_buzz(void)
{
	int i;
	int j;
	{
		for (i = 0; i < 100; i++)
		{
			if ((i % 3) == 0)
				print_fizz();
			else if ((i % 5) == 0)
				print_buzz();
			else if (((i % 3) == 0) && ((i % 5) == 0))
				print_fizzbuzz;
			else
			{
				if (i < 10)
					_putchar((i % 10) + '0');
				else
				{
					_putchar((i / 10) + '0');
					_putchar((i % 10) + '0');
				}
			}
		_putchar(' ');

		}
	}
}

/**
 * print_fizz - prints fizz using _putchar
 *
 */
void print_fizz(void)
{
	char myStr[] = "Fizz";
	int i;

	for (i = 0; i < 4; i++)
		_putchar(myStr[i]);
}

/**
 * print_buzz - prints buzz using _putchar
 *
 */
void print_buzz(void)
{
	char myStr[] = "Buzz";
	int i;

	for (i = 0; i < 4; i++)
		_putchar(myStr[i]);
}

/**
 * print_fizzbuzz - prints fizzbuzz using _putchar
 *
 */
void print_fizzbuzz(void)
{
	char myStr[] = "FizzBuzz";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(myStr[i]);
}
