#include <stdio.h>

/**
 * main - program that prints the number of arguments passed into it.
 *
 * @argc: the number of arguments passed into the program
 * @argv: the array of arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char __attribute__((unused))*argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
