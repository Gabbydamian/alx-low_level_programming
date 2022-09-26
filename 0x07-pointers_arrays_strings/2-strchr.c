#include "main.h"

/**
 * *_strchr - returns pointer to the first occurence
 * of a character or  null if character not found
 * @s: source string
 * @c: character
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	if (s[i] == c)
		return (s + i);
	else
		return ('\0');
}
