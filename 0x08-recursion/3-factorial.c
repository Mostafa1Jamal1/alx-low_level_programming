/**
 * factorial - returns the factorial of a given number.
 *
 * @n: the number to calculate the factorial of.
 *
 * Return: the factorial of the number n
 * Factorial of 0 is 1
 * If n is lower than 0, the function should return -1 to indicate an error
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
