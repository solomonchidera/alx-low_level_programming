#include "dog.h"
#include <stdlib.h>

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %d\nOwner: %s", d->name, d->age, d->owner);
}
