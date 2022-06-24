/*
 * File: 0-whatsmyname.c
 * Auth: Udeani henry
 */

#include <stdio.h>

/**
 * main - returnsite own saved name
 * @argc: argument count
 * @argv: vector argument
 * Return: 0 if successful
 */

int main( int argc, char *argv[])
{
	argc--;
	printf("%s\n", argv[0]);
	return (0);
}
