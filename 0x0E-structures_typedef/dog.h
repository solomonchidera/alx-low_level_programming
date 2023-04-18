#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - A new type description for dog
 * @name - The name of the dog
 * @age - The age of the dog
 * @owner - Owner of the dog
 */

struct dog
{
	char *name;
	float *age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* MAIN_H */
