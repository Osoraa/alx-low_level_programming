#include "3-calc.h"

/**
 * get_op_function - Determines the correct function to use to perform operation.
 * @s: the operator passed as an argument to the program.
 *
 * Return: Pointer to the corresponding function that the operator needs.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	    {"+", op_add},
	    {"-", op_sub},
	    {"*", op_mul},
	    {"/", op_div},
	    {"%", op_mod},
	    {NULL, NULL}};
	int i = 0;

	printf("lmao");

	while (ops[i].op && ops[i].f)
	{
		if (s == ops[i].op)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
