/*
 * File: 7-print_tebahpla.c
 * Auth: github.com/udeani
 */

#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse of the order..
 *
 * Return: 0.
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);

	putchar('\n');

	return (0);
}
