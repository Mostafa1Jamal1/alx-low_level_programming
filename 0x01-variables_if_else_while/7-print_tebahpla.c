#include <stdio.h>
/**
 * main - Entry point
 *
 * this code prints the alphabet in lowercase in reverse
 * followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	c = 'z';
	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
