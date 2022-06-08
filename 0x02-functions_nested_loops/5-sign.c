/*
 * File: 5-sign.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * print_sign - prints the sign value of a number
 * @n: input from test file
 * Return: either 1, 0, 0r -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('-');
		return ('/');
	}
}
