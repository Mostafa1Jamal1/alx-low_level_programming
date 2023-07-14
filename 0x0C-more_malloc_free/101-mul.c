#include <stdlib.h>
#include "main.h"
/**
 * _isdigit - is a function that checks for a digit (0 through 9)
 * @c: The character to check
 * Return: 1 if c is a digit
 * otherwise return 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/**
 * printerror - prints error
*/
void printerror(void)
{
	int i;
	char e[] = "Error\n";

	for (i = 0; e[i] != 0; i++)
		_putchar(e[i]);
}
/**
 * main - multiplies two positive numbers.
 *
 * @argc: number of arguments that must be 3 or error.
 * @argv: array of strings of the given arguments
 *
 * Return: 0 (Success)
 * or 98 if the number of arguments is incorrect
 * or if num1 and num2 not composed of digits only
*/
int main(int argc, char **argv)
{
	long long int num1len, num2len;

	/* Checking if valid number of arguments */
	if (argc != 3)
	{
		printerror;
		return (98);
	}
	/* Checking validation of num1 and counting the length */
	for (num1len = 0; argv[1][num1len] != 0; num1len++)
	{
		if (_isdigit(argv[1][num1len]) == 0)
		{
			printerror;
			return (98);
		}
	}
		/* Checking validation of num2 and counting the length */
	for (num2len = 0; argv[1][num2len] != 0; num2len++)
	{
		if (_isdigit(argv[1][num2len]) == 0)
		{
			printerror;
			return (98);
		}
	}
	return (98);
}
