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
	int sum;

	sum = a + b;
	return (sum);
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
	int sub;

	sub = a - b;
	return (sub);
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
	int mul;

	mul = a * b;
	return (mul);
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
	int div;

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
	int mod;

	mod = a % b;
	return (mod);
}
