/**
 * flip_bits - get the number of bits needed to flip
 * to get from one number to another.
 * @n: the first number
 * @m: the second number
 * Return: the number of bits needed
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bitmask = 1, diff = n ^ m;
	unsigned int bits = 0;

	while (diff)
	{
		if (diff & bitmask)
			bits++;
		diff >>= 1;
	}
	return (bits);
}
