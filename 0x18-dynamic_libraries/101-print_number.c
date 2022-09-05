/*
 * File: 101-print_number.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * print_number - function to print an integer
 * @n: the number/integer to print
 */

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if ((num / 10) > 0)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}
