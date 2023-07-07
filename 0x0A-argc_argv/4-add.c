#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers.
 *
 * @argc: the number of arguments passed into the program
 * @argv: the array of arguments(the two numbers provided)
 *
 * Return: 0 (Success)
 * otherwise return 1
*/

int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; *(argv[i] + j) != 0; j++)
		{
			if (isdigit(*(argv[i] + j)) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
