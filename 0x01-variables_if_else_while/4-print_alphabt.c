#include <stdio.h>
/**
 * main - Entry point
 *
 * this code prints the alphabet in lowercase, followed by a new line.
 * Print all the letters except q and e
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
	{
		if (c == 'q')
		{
			c++;
		}
		else if (c == 'e')
		{
			c++;
		}
		else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
