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
	if (n < 0)
		n = n * -1;
	_putchar((n % 10) + '0');
	return (n % 10);
}
