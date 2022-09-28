#include "main.h"

/**
 * _sqrt_recursion - returns the natural squareroot of a num
 * @n: integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - finds squareroot
 * @a: integer
 * @b: integer
 * Return: square root
 */
int find_sqrt(int a, int b)
{
	int c = b * b;

	if (c > a)
		return (-1);
	if (c == a)
		return (b);
	return (find_sqrt(a, b + 1));
}
