#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Auth: Udeani henry
 * Desc: Header file to define a new type strct dog.
 */

/**
 * struct dog - A new type describing a dog.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
