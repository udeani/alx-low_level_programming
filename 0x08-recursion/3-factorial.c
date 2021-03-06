/*
 * File: 3-factorial.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * factorial - fucntion to return the factorial of any given number
 * @n: any number
 * Return: te factorial of n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
