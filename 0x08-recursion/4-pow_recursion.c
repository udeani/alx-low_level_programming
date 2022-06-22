/*
 * File: 4-pow_recursion.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * _pow_recursion - function to return the power of an integer
 * @x: the integer
 * @y: the power of the integer
 * Return: the power value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
