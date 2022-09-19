#include "main.h"
#include <stdio.h>

/**
 * _strcpy - entry
 * Description: copies the str pointer
 * @dest: destination
 * @src: source
 * Return: something
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	j++;
	return (dest);
}
