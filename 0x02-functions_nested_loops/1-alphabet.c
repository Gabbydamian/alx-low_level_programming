#include "main.h"
/**
 * print_alphabet - function prints alphabet in lowercase using _putchar
 * Return: 0
 */
void print_alphabet(void)
{
	char i = 'a';

	for (; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
