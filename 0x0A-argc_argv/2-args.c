#include <stdio.h>

/**
 * main - entry point
 * @argc: list of parameters
 * @argv: array of parameters
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
