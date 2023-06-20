#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: The number to get last digit from
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int rem = n % 10;

	if (rem < 0)
	{
		rem = rem * (-1);
	}
	else
	{
		rem = rem;
	}
	_putchar(rem + '0');
return (rem);
}
