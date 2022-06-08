/*
 * File: 7-print_last_digit.c
 * Auth: henry udeani
 */

#include "main.h"

/**
 * print_last_digit - prints the last digit of any number
 * @n: input from test file
 * Return: always last digit of last
 */

int print_last_digit(int n)
{
	int c = (n % 10);

	if (c < 0)
		c  *= -1;
	_putchar(c + '0');
	return (c);
}
