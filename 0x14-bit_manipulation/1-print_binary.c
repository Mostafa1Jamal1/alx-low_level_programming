#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: the number to represent
*/
void print_binary(unsigned long int n)
{
	unsigned long int bitmask = 1;
	/* Check if n == 0 */
	if (n == 0)
	{
		_putchar('0');
		return;
	}   /* Go to the first bit that has 1 */
	bitmask <<= 63;
	while (bitmask)
	{
		if (bitmask & n)
			break;
		bitmask >>= 1;
	}   /* Print the rest of the bits */
	while (bitmask)
	{
		_putchar(bitmask & n ? '1' : '0');
		bitmask >>= 1;
	}
}
