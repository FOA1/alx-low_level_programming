#include <stdio.h>
/**
 * main - prints number 1 to 15 using putchar
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
				putchar((j/10) + '0');
			putchar((j % 10) + '0');
		}
		putchar('\n');
	}

	return 0;
}
