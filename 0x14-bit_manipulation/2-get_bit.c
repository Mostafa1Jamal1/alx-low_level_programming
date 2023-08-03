/**
 * get_bit - gets the value of a bit at a given index.
 * @n: the value from which look at
 * @index: the index of the bit to get from n
 * Return: the value of the bit at index index
 * or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitmask = 1;

	if (index > 63)
		return (-1);
	bitmask <<= index;
	return (bitmask & n ? 1 : 0);
}
