/*
 * File: 11-print_to_98.c
 * Auth: udeani henry
 */

#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints number from 1 to 98 if less
 *     else prints the number from max to min
 * @n: number to test
 * Return: nothing
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
