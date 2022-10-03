#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated mem space
 * @str: string
 * Return: pointer to string
 */

char *_strdup(char *str)
{
	char *p;
	int i = 0, j = 0;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i += 1;
	p = malloc(i * sizeof(char) + 1);

	if (p == NULL)
		return (NULL);
	while (*str)
	{
		p[j] = *str;
		str++;
		j += 1;
	}
	p[j] = *str;
	return (p);
}
