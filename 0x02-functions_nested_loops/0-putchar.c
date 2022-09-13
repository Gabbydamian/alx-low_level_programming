#include "main.h"
/**
 * main - prints '_putchar' then a new line without standard libraries
 * Return: 0
 */
int main(void)
{
	char word[] = "_putchar";
	int i = 0;

	for (; word[i] != '\0'; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
