#include "main.h"
/**
 * _islower - checks for lowercase characters
 * @c : int type
 * Return: 1 if true and 0 otherwise
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
