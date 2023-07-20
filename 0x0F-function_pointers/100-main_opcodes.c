#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function.
 * @argc: number of arguments
 * @argv: array of argument strings
 * Return: 0 (Success)
*/
int main (int argc, char **argv)
{
    int (*m)(int, char **);
    char *c;
    int nbytes, i;

    if (argc != 2)
    {
        printf("Error\n");
        return (1);
    }
    nbytes = atoi(argv[1]);
    if (nbytes < 0)
    {
        printf("Error\n");
        return (2);
    }
    m = main;
    c = m;
    for (i = 0; i < nbytes; i++)
    {
        printf("%x", *c);
        if (i < (nbytes - 1))
            printf(" ");
        c++;
    }
    printf("\n");
    return (0);
}
