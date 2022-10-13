#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings, followed by a new line.
 *
 * @separator: the character to print between te strings
 * @n: the number of strings passed
 *
 *Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i = 0;
	char *str;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char*);

		if (str == NULL)
			str = "(nil)";
		printf("%s", str);

		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");

}
