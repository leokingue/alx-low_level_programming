#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - a function that prints a struct dog
 * @d: pointer argument
 * Return: void
 */
void print_dog(struct dog *d)
{
	struct dog *ptr_d = d;

	if (ptr_d == NULL)
		;
	else
	{
		if (ptr_d->name != NULL)
		{
			printf("Name: %s\n", ptr_d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		printf("Age: %f\n", ptr_d->age);
		if (ptr_d->owner != NULL)
		{
			printf("Owner: %s\n", ptr_d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
