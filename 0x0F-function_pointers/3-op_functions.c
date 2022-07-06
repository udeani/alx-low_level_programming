/*
 * File 3-op_functions.c
 * Auth: Udeani henry
 */

#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function to add two numbers.
 * @a: input 1
 * @b: input 2
 * Return: an integer of the sum.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtract two numbers.
 * @a: input 1
 * @b: input 2
 * Return: an integer of the difference.
 */
int op_sub(int a, int b)
{       
        return (a - b);
}

/**
 * op_sub - function to multiply two numbers.
 * @a: input 1
 * @b: input 2
 * Return: an integer of the multiplication.
 */
int op_mul(int a, int b)
{
        return (a * b);
}

/**
 * op_div - function to divide two numbers.
 * @a: input 1
 * @b: input 2
 * Return: an integer of the division.
 */
int op_div(int a, int b)
{
        return (a / b);
}

/**
 * op_mod - function to remainder of two numbers.
 * @a: input 1
 * @b: input 2
 * Return: an integer of the remainder.
 */
int op_mod(int a, int b)
{
        return (a % b);
}
