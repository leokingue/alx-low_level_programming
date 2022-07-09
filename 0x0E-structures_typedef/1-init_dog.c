#include "dog.h"
/**
 *init_dog - a function that initialize a variable of type struct dog
 * @d: dog variable
 * @name: name of dog
 * @age: float age
 * @owner: string variable
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr_d = d;

	ptr_d->name = name;
	ptr_d->age = age;
	ptr_d->owner = owner;
}
