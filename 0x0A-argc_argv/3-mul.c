#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 *
 * @argc: the number of arguments passed into the program
 * @argv: the array of arguments(the two numbers provided)
 *
 * Return: 0 (Success)
 * otherwise return 1
*/

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
