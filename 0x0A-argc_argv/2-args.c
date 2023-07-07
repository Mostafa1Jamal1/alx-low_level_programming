#include <stdio.h>

/**
 * main -  prints all arguments it receives.
 *
 * @argc: the number of arguments passed into the program
 * @argv: the array of arguments
 *
 * Return: 0 (Success)
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
