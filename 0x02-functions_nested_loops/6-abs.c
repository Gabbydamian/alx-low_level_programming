#include "main.c"
/**
 * _abs - computes the absolute value of an integer
 * @n: int type
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}