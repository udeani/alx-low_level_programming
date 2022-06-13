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
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
