#include "dog.h"
/* init_dog - a function that initialize a variable of type struct dog
 * @d: dog variable
 * @name: name of dog
 * @age: float age
 * @owner: string variable
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}
