#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - automatically allocates memory
 * @b: unsigned integer
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *c;

	c = malloc(b);

	if (c == NULL)
		exit(98);
	return (c);
}

