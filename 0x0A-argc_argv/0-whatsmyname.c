#include <stdio.h>

/**
 * main -  prints its name, followed by a new line.
 *
 * @argc: the size of the argv array
 * @argv: the array containing the program command line arguments
 *
 * Return: 0 (Success)
 */

int main(int __attribute__((unused))argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
