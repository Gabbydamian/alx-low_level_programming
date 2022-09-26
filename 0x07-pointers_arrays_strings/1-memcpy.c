#include "main.h"

/**
 * _memcpy - copies n bytes from memory area 'src' to memory area 'dest'
 * @dest: souce of copied bytes
 * @src: destination of copied bytes
 * @n: number of bytes
 * Return: pointer to dest(modified original)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
