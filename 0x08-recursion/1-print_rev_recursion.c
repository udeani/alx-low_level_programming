/*
 * File: 1-print_rev_recursion.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * _print_rev_recursion - function to print a string in reverse
 * @s: the string or buffer to reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
