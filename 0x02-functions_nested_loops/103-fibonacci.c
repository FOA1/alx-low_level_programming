#include <stdio.h>
/**
 * main - Write a program that prints Fibonacci sequence
 * whose values do not exceed 4,000,000,
 * write a program that finds and prints the sum of the even-valued terms,
 * followed by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int prev_num = 1,
		pre_prev_num = 0,
		new_num = 0,
		sum = 0;

	while (new_num <= 4000000)
	{
		new_num = prev_num + pre_prev_num;
		pre_prev_num = prev_num;
		prev_num = new_num;

		if ((new_num % 2) == 0)
		{
			sum = sum + new_num;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
