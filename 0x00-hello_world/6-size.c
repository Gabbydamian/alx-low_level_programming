#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	int integer;
	long int longInteger;
	long long int longLongInteger;
	char character;
	float floatNumber;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(character));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longInteger));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(longLongInteger));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatNumber));
	return (0);
}
