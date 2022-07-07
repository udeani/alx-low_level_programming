/*
 * File: 1-print_numbers.c
 * Auth: Udeani henry
 */

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - function to print numbers floowed by a new line.
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * Return: Nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list p_num;

	va_start(p_num, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(p_num, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	va_end(p_num);

	printf("\n");
}
