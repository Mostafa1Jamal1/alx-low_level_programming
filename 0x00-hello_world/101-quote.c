#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 * made a array for the error message
 * use fwrite function to print
 * Return: 1 (Error)
 */
int main(void)
{
char *ermsg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int len = strlen(ermsg);
fwrite(ermsg, sizeof(char), len, stderr);
return (1);
}
