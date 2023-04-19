#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * _strlen - a function to find the length of a string
 * @s: the string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}

/**
 * _strcpy - copies the string pointed to by src
 * @dest: the pointer to the buffer string copy
 * @src: the string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, b;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}
	for (b = 0; b < len; b++)
	{
		dest[b] = src[b];
	}
	dest[b] = '\0';
	return (dest);
}

/**
 * new_dog - a function that creates a new dog.
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 *
 * Return: pointer to the new struct dog (success), NULL if fail.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	int name_len, owner_len;

	name_len = _strlen(name);

	owner_len = _strlen(owner);

	ndog = malloc(sizeof(dog_t));

	if (ndog == NULL)

		return (NULL);

	ndog->name = malloc(sizeof(char) * (name_len + 1));

	if (ndog->name == NULL)
	{
		free(ndog);

		return (NULL);
	}

	ndog->owner = malloc(sizeof(char) * (owner_len + 1));

	if (ndog->owner == NULL)
	{
		free(ndog);

		free(ndog->name);

		return (NULL);
	}

	strcpy(ndog->name, name);

	_strcpy(ndog->owner, owner);

	ndog->age = age;
	return (ndog);
}
