#include "variadic_functions.h"
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list print_any;
	char *p;

	va_start(print_any, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(print_any, int));
				break;
			case 'i':
				printf("%d", va_arg(print_any, int));
				break;
			case 'f':
				printf("%f", va_arg(print_any, double));
				break;
			case 's':
				p = va_arg(print_any, char *);
				if (p == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", p);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
					format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(print_any);
}
