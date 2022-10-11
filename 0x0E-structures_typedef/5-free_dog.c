#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dog- Fress dogs
 * @d: Dog identifier
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->owner)
		{
			free(d->owner);
		}
		if (d->name)
		{
			free(d->name);
		}
		free(d);
	}
}
