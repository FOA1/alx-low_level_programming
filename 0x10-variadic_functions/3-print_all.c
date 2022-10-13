#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int len = 0, i = 0, j = 0, x;
	va_list print_any;
	char *p, c;
	float d;

	while (format[j] != '\0')
	{
		j++;
		len++;
	}
	va_start(print_any, format);
	{
		while (i < len)
		{
			switch (format[i])
			{
				case 'c' :
				{
					c = va_arg(print_any, int);
					printf("%c", c);
					break;

				}
				case 'i' :
				{
					x = va_arg(print_any, int);
					printf("%d", x);
					break;
				}
				case 'f' :
				{
					d = va_arg(print_any, double);
					printf("%f", d);
					break;
				}
				case 's' :
				{
					p = va_arg(print_any, char *);
					if (p == NULL)
						printf("(nil)");
					printf("%s", p);
					break;
				}
				default :
					break;
			}
			i++;
		}
	}
	printf("\n");
}
