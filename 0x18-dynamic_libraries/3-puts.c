/*
 * File: 3-puts.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * _puts - prints the passed string and new line.
 * @str: the passed string
 * Return: lenght of the string.
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
