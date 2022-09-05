/*
 * File: 1-swap.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * swap_int - swaps the integers passed.
 * @a: 1st int
 * @b: 2nd int
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
