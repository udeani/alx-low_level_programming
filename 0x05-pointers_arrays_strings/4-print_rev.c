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
	int i;

	while(s[i] != '\0')
	{
		i++;
	}
	//i--;
	while (s[i] != '\0')
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
