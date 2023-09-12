#include "main.h"
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog init_dog;
	
	init_dog.name = "Poppy";
	init_dog.age = 3.5;
	init_dog.owner = "Bob";
}
