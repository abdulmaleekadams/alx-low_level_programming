#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog structure
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new struct on success, otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	size_t name_len, owner_len;

	if (name == NULL || owner == NULL)
		return NULL;

	name_len = strlen(name);
	owner_len = strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(name_len + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(owner_len + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free (dog);
		return (NULL);
	}

	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
