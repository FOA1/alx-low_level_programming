#include "3-calc.h"
/**
 * get_op_func - a fuction pointer that helps to get the required operator
 *
 * @s: the required operator
 * Return: pointer to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (*s == *ops[i].op)
			break;
		i++;
	}
	return (ops[i].f);
}
