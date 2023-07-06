/**
 * prime - the same as next function but takes two argument
 * and doesn't handle numbers < 2
 *
 * @n: the number to check
 * @x: number to devide by
 *
 * Return: 1 if the input integer is a prime number
 * otherwise return 0
 */
int prime(int n, int x)
{
	if (x > (n / 2))
		return (1);
	if (n % x == 0)
		return (0);
	return (prime(n, x + 1));
}

/**
 * is_prime_number - check if prime number
 *
 * @n: the number to check
 *
 * Return: 1 if the input integer is a prime number
 * otherwise return 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
