#include <stdio.h>
/**
 * main - Entry point
 *
 * this code prints the alphabet in lowercase, followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
