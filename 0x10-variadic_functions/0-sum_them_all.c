#include "variadic_functions.h"
/**
 * sum_them_all - get the sum of all its parameters.
 * @n: the number of parameters.
 * Return: the sum of all its parameters.
 * or If n == 0, return 0.
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	int sum = 0, i;

	if (n == 0)
		return (0);
	va_start(arg, n);
	for (i = 0; i < (int)n; i++)
		sum += va_arg(arg, int);
	va_end(arg);
	return (sum);
}
