/*
 * File: 3-get_op_func.c
 * Auth: Udeani henry
 */

#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function to select the correct function to perform an operation
 * @s: operator passed as argument
 * Return: integer as the result of the operation
 */

int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	i = 0;
	
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
