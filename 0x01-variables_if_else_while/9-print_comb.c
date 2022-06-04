/*
 * File: 9-print_comb.c
 * Auth: github.com/udeani
 */

#include <stdio.h>

/**
 * main - Script that pPrints all possible
 *       combinations of single-digit numbers.
 *
 * Return: 0.
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	putchar('\n');

	return (0);
}
