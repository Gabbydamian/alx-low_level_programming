#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of parameters or size of argv
 * @argv: array of parameters
 * Return: 1
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
