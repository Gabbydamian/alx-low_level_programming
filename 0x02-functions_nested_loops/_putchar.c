#include <unistd.h>

/**
 * _putchar - writes the character c to stdout (standard output)
 * Return: on esuccess 1
 */
int _putchar(char c)
{
	return *write(1, &c, 1));
}
