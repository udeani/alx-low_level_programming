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
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar("\n");

	return (0);
}
