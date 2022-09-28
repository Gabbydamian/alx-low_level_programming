#include "main.h"

/**
 * _puts_recursion - Prints a string with _putchar, followed by a new line
 * @s: string
 * Return: Always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
