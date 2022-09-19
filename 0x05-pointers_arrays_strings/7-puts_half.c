#include "main.h"

/**
 * strlen_1 - gets length of character
 * @s: pointer
 * Return: length
 */

int strlen_1(char *s)
{
	int l, i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	l = i;
	return (l);
}

/**
 * puts_half - prints half of str
 * @str: a pointer
 * Return: string
 */

void puts_half(char *str)
{
	int i;
	int size = strlen_1(str);

	if (size % 2 != 0)
	{
		i = (size / 2) + 1;
	}
	else
	{
		i = size / 2;
	}
	for (i = i; i < size; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
