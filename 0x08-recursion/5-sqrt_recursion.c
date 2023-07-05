/**
 * sr - returns the natural square root of a number
 *
 * @n: number >= 0
 * @x: possible root
 *
 * Return: the natural square root of n
 * If n does not have a natural square root, the function should return -1
 */

int sr(int n, int x)
{
	if (x <= 1)
		return (-1);
	if (n % x == 0)
	{
		if (x * x == n)
			return (x);
		if (x * x > n)
			return (sr(n, x - 1));
		if (x * x < n)
			return (-1);
	}
	if (n % x != 0)
	{
		if (x * x > n)
			return (sr(n, x - 1));
		if (x * x < n)
			return (-1);
	}
	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: the number given.
 *
 * Return: the natural square root of n.
 * If n does not have a natural square root, the function should return -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sr(n, (n / 2)));
}
