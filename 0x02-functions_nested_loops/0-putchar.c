#include "main.h"
/**
 * main - calls the function _putchar to
 * help us print instead of print f
 *
 * Return: Always 0.
 */
int main(void)
{
	char myStr[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(myStr[i]);
	}

	_putchar('\n');
	return (0);
}
