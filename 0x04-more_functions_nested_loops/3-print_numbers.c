/*
 * File: 3-print_numbers.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * print_numbers - Prints numbers from 0-9.
 * Return: always 0.
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar((num % 10) + '0');

	_putchar('\n');
	return (0);
}
