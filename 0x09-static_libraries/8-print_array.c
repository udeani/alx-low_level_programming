/*
 * File: 8-print_array.c
 * Auth: udeani henry
 */

#include "main.h"

/**
 * print_array - prints the n elements of array
 * @a: the array
 * @n: the element numbers to print
 */

void print_array(int *a, int n)
{
	int len;

	for (len = 0; len < n; len++)
	{
		printf("%d", *a[len]);
		if (len != n - 1)
			printf(", ");
	}
	printf("\n");
}
