#include "function_pointers.h"
/**
 * print_name - prints name using callback function
 *
 * @name: the name to be printed
 * @f: a function pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);

}
