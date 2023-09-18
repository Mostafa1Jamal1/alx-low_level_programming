#include "main.h"

/**
 * _abs - computes the absolute value of an integer.
 *
 * @n: The number to compute the absolute value
 *
 * Return: 0 (Success)
 */

int _abs(int n)
{
	if (n > 0)
	{
	return (n);
	}
	else
	{
	n = n * (-1);
	return (n);
	}
return (0);
}
