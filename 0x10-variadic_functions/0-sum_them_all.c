/*
 * File: 0-sum_them_all.c
 * Auth: UDeani henry
 */

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_them_all - function that returns the sum of all parameters passed.
 * @n: number of parameters passed.
 * Return: sum of the parameters passed.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;

	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}
