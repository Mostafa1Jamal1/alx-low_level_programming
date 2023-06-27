#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    printf("before\n");
    rev_string(s);
    printf("after\n");
    printf("%s\n", s);
    return (0);
}
