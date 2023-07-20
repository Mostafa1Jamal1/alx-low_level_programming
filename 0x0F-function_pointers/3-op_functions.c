#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - Adds two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the sum of a and b
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Subtract two integers
 * @a: the integer to subtract from
 * @b: the integer to subtract
 * Return: the difference of a and b
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Multiply two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the product of a and b
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Divide two integers
 * @a: the integer to divide
 * @b: the integer to divide by
 * Return: result of the division of a by b
*/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - Get the remainder of division of two integers
 * @a: the integer to divide
 * @b: the integer to divide by
 * Return: the remainder of the division of a by b
*/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
