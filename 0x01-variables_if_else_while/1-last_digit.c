#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - entry point
 * Return: 0 Always
 */
int main(void)
{
		int n;
		int last;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		/* your code goes there */
		last = n % 10;
		if (last > 5)
		{
			printf("Last digit of %lu is %d and is greater than 5\n", n, last);
		} else if (last == 0)
		{
			printf("Last digit of %lu is %d and is 0\n", n, last);
		} else if (last < 6 && last != 0)
		{
			printf("Last digit of %lu is %d and is less than 6 and not 0\n", n, last);
		} else
		{
			break;
		}
		return (0);
}
