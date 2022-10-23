#include "3-calc.h"
/**
 * op_add - adds two numbers
 * @a: the first operand
 * @b: the second operand
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: the first operand
 * @b: the second operand
 *
 * Return: a minus b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers
 *
 * @a: the first operand
 * @b: the second operand
 *
 * Return: a minus b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers
 *
 * @a: the first operand
 * @b: the second operand
 *
 * Return: a divide b
 */

int op_div(int a, int b)
{
	int div = 0;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	div = a / b;
	return (div);
}

/**
 * op_mod - finds thr mod of two numbers
 *
 * @a: the first operand
 * @b: the second operand
 *
 * Return: a modulo b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
