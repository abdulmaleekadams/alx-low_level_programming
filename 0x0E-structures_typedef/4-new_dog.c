#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * str_len - finds the length of a string
 * @str: the string
 *
 * Return: the length of the string
 */
int str_len(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return len;
}

/**
 * str_copy - copies the string pointed to @src to the buffer pointed to @dest
 * @src: the pointer to the string to be copied
 * @dest: the pointer to the buffer of the string copied
 *
 * Return: a pointer to dest
 */
char *str_copy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return dest;
}

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new struct on success, otherwise NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	int name_len, owner_len;

	name_len = str_len(name);
	owner_len = str_len(owner);

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

	str_copy(dog->name, name);
	str_copy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
