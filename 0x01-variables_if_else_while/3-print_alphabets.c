#include <stdio.h>
/**
 * main - Entry point
 *
 * this code prints the alphabet in lowercase
 * and then in uppercase,followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;
	char C;

	c = 'a';
	C = 'A';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
