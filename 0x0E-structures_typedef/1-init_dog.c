#include "dog.h"

/*
* File: 1-init_dog.c
* Author: Your Name
* Description: This file contains
the definition of the init_dog function.
*/

/*
* init_dog - Initializes a struct dog
* @d: Pointer to the struct dog to be initialized
* @name: Name of the dog
* @age: Age of the dog
* @owner: Owner of the dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
/* Assign the provided values to the struct members */
d->name = name;
d->age = age;
d->owner = owner;
}
