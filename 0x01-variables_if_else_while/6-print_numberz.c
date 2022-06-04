/*
 * File:6-print_numberz.c
 * Auth: github.com/udeani
 */

#include <stdio.h>

/**
 * main - code to print numbers in base 10
 * Return: 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
