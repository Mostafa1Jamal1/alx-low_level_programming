#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * The function should print the second half of the string
 * If the number of characters is odd
 * the function should print the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2
 *
 * @str: The string given
 */

void puts_half(char *str)
{
	int count = 0;
	int i;

	while (str[count] != 0)
		count++;
	if (count % 2 == 0 && count != 0)
	{
		for (i = (count / 2); i < count; i++)
			_putchar(str[i]);
	}
	if (count % 2 == 1)
	{
		for (i = ((count / 2) + 1); i < count; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
