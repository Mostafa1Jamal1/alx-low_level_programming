/**
 * _atoi - convert a string to an integer
 *
 * @s: a pointer to the string to convert
 *
 * Return: an integer converted from the string
 * taking to account all the - and + signs before the number
 * return 0 if there are no numbers in the string
*/

int _atoi(char *s)
{
	int dashc = 0;
	unsigned int num = 0;

	while (*s != 0)
	{
		if (*s == '-')
			dashc++;
		if (*s >= '0' && *s <= '9')
		{
			while (*s >= '0' && *s <= '9')
			{
				if (num > 0)
					num *= 10;
				num += *s - '0';
				s++;
			}
			if (dashc % 2 != 0)
				num = -num;
			return (num);
		}
		s++;
	}
	return (0);
}
