/*
 * File: 2-print_string.c
 * Auth: Udeani henry
 */

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - funtion to printstrings followed by a new line.
 * @separator: the string to be printed between strings.
 * @n: the number of strings passed.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *string;
	va_list l_str;

	va_start(l_str, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(l_str, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if ((separator != NULL) && (i != (n - 1)))
			printf("%s", separator);
	}
	va_end(l_str);

	printf("\n");
}
	

