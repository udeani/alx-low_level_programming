/*
 * File: 4-rev_array.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * reverse_array - funct to reverse the content of array of integers.
 * @a: the array to be reversed
 * @n: the number of items in the array
 */

void reverse_array(int *a, int n)
{
	int x = 0;
	int y = n - 1;
	int tmp;

	while (x < y)
	{
		tmp = a[x];
		a[x] = a[y];
		a[y] = tmp;
		x++;
		y--;
	}
}
