#include "main.h"

/**
 * print_rev - prints a string in reverse then a new line
 * @s: string of char type
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int len;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	for (i = i - 1; i >= 0; i--)
	{
		len = s[i];
		_putchar(len);
	}
	_putchar('\n');
}
