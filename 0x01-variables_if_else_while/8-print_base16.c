#include <stdio.h>
/**
 * main - is the entry point for the program
 * Return: 0
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar(num);
	for (letter = 'a'; letter < 'g'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
