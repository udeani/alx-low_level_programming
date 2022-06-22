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
		return (0);
	return (n * factorial(n - 1));
}
