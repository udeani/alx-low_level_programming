/*
 * File: 0-puts_recursion.c
 * Auth: Udeani henry
 */

#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: the string to print
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(&s[i + 1]);
	}
	else
		_putchar('\n');
}
