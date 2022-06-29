#include "calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_op_func - select the function to perform the operations asked
 * @s: operator passed as argument
 *
 * Description:
 * Return: pointer to function
 */
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (ops[i].op == s)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
