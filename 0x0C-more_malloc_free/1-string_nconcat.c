#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concats two strings
 * @s2: string 1
 * @s1: string2
 * @n: integer
 * Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int l = 0, i = 0;
	unsigned int j = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[1])
		l += 1;
	p = malloc(1 + n + 1);
	if (p == NULL)
		return (NULL);
	while (s1[i])
	{
		p[i + j] = s2[j];
		j += 1;
	}
	p[i + j] = '\0';
	return (p);
}
