#include <stdio.h>
/**
 * main - main is the entry point to the program
 * function has no parameters
 * always returns 0
 */
int main(void)
{
	char letter = 'a';

	for (; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
