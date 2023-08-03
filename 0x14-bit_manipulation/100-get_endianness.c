/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian
*/
int get_endianness(void)
{
	int x = 0x01234567;
	char *byte = (char *)&x;

	if (*byte == 0x01)
		return (0);
	if (*byte == 0x67)
		return (1);
	return (-1);
}
