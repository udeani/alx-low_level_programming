/*
 * File: 2-print_alohabet.c
 * Auth: github.com/udeani
 */
#include <stdio.h>
/**
 * main - Prints the alphabets in small letters
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
