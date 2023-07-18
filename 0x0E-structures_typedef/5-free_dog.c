#include "dog.h"

/**
 * free_dog - frees a dog structure
 * @d: the dog to free
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
