#include <stdio.h>
/* #include main.h */

/**
 * main - Prints Numbers from 1 to 100.
 * when it encounter multiples of 3, it prints fizz,
 * and buzz for multiples of 5.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i;
	{
		for (i = 1; i <= 100; i++)
		{
			if (i == 100)
			{
				printf("Buzz\n");
				continue;
			}
			else if (((i % 3) == 0) && ((i % 5) == 0))
			{
				printf("fizzBuzz ");
				continue;
			}
			else if ((i % 3) == 0)
			{
				printf("Fizz ");
				continue;
			}
			else if ((i % 5) == 0)
			{
				printf("Buzz ");
				continue;
			}
			else
				printf("%d ", i);

		}
	}

	return (0);
}
