#include "main.h"
/**
 * main - Entry point
 *
 * that prints _putchar, followed by a new line.
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int i;
	char word[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r', '\n'};

	for (i = 0; i < 9; i++)
		_putchar(word[i]);

return (0);
}
