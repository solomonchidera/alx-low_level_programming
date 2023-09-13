#include <stdlib.h>
#include "dog.h"
#include <stddef.h>
/**
 * _strlen - return string length
 * @str: the giving string
 * Return: the length
 */
int _strlen(char *str)
{
	int len = 0, i = 0;

	while (str[i++])
		len++;
	return (len);
}
/**
 * _strcpy - copy a src string into dest string
 * @dest: destination string
 * @src: source string
 * Return: a pointer to a destination string
 */
char *_strcpy(char *dest, char *src)
{
	int src_len = 0, i;

	src_len = _strlen(src);
	for (i = 0; i < src_len; i++)
		*(dest + i) = *(src + i);
	*(dest + i) = '\0';
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 * Return: pointer to dog (success), NULL (fails)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	int name_len = 0, owner_len = 0;
	char *o, *n;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);
	/* get the length of name and allocate space to it */
	name_len = _strlen(name);
	n = malloc(sizeof(*n) * name_len + 1);
	if (n == NULL)
	{
		free(new);
		return (NULL);
	}
	/* get the length of owner and allocate space to it */
	owner_len = _strlen(owner);
	o = malloc(sizeof(*o) * owner_len + 1);
	if (o == NULL)
	{
		free(n);
		free(new);
		return (NULL);
	}
	/* copy arguments into new dog elements */
	new->name = _strcpy(n, name);
	new->age = age;
	new->owner = _strcpy(o, owner);
	return (new);
}
