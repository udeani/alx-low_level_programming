/*
 * File: 7-print_last_digit.c
 * Auth: henry udeani
 */

#include "main.h"

/**
 * print_last_digit - prints the last digit of any number
 * @last: input from test file
 * Return: always last digit of last
 */

int print_last_digit(int last)
{
	if (last < 0)
		last = last * -1;
	_putchar((last % 10) + '0');
	return (last % 10);
}
