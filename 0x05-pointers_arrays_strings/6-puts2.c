#include "main.h"

/**
 * strlen_1 - prints every charcater of as tr
 * @s: char
 * Return: something
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
 * puts2 - prints one char
 * @str: a pointer
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	int size = strlen_1(str);

	for (i = 0; i < size; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
