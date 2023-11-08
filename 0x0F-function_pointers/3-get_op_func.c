#include "3-calc.h"
#include "function_pointers.h"

/**
 * get_op_func - selects the correct function to
 * perform the operation asked by the user.
 *
 * @s: the operator passed as argument to the program
 * Return: pointer to the function that corresponds
 * to the operator given as a parameter.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	while (i < 10)
	{
		if (s[0] == ops->op[i])
			break;
		i++;
	}

	return (ops[i / 2].f);
}
