#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: separates the given numbers
 * @n: total numbers present
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int x, i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		x = va_arg(nums, int);

		if (separator == NULL)
			printf("%d", x);

		else
		{
			printf("%d", x);
			if (i == n - 1)
				continue;
			printf("%s", separator);
		}
	}
	printf("\n");

}
