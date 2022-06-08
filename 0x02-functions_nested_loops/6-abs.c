/*
 * File: 6-abs.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * _abs - returns absolute value of any number
 * @n: returns the positive of this input
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
