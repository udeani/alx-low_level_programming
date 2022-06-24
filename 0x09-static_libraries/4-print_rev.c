/*
 * File: 4-print_rev.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * print_rev - prints any passed string in reverse.
 * @s: the string to reverse
 * Return: will always return reversed string
 */

void print_rev(char *s)
{
	int i, c = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		c++;
	}
	for (i = c - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
