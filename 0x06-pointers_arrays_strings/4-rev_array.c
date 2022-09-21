#include "main.h"
/**
 * reverse_array - reverses the contents of n array
 * @a: integer
 * @n: integer
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int x, y;
	int z = n - 1;

	for (y = 0; y < z; y++, z--)
	{
		x = a[y];
		a[y] = a[z];
		a[z] = x;
	}
}
