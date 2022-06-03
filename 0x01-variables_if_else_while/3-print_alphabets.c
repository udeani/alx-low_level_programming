/*
 * File: 3-print_alohabets.c
 * Auth: github.com/udeani
 */
#include <stdio.h>
/**
 * main - Prints the alphabets in small letters and capital letters
 * Return: 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
