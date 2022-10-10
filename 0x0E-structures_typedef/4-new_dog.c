#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: a new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *_dog;
	int i = 0, j = 0, k, l;

	_dog = malloc(sizeof(dog_t));
	if (_dog == NULL)
		return (NULL);
	if (name != NULL)
		while (name[i] != '\0')
			i += 1;
	if (owner != NULL)
		while (owner[j] != '\0')
			j += 1;
	_dog->name = malloc(i * sizeof(char) + 1);
	_dog->owner = malloc(j * sizeof(char) + 1);
	if (_dog->name == NULL)
	{
		free(_dog);
		return (NULL);
	}
	if (_dog->owner == NULL)
	{
		free(_dog->name);
		free(_dog);
		return (NULL);
	}
	for (k = 0; k < i; k += 1)
		_dog->name[k] = name[k];
	for (l = 0; l < j; l += 1)
		_dog->owner[l] = owner[l];
	_dog->name[k] = '\0';
	_dog->owner[l] = '\0';
	_dog->age = age;
	return (_dog);
}
