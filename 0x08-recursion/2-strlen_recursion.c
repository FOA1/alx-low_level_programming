#include "main.h"
/**
 * _strlen_recursion - prints the length of a string using recursion
 *
 * @s: the string to find its lenght
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	else
		return 1 + _strlen_recursion(s + 1);
}
