/**
 * rot13 - encodes a string using rot13.
 *
 * @s: a pointer to the string
 *
 * Return: a pointer to encoded string
*/

char *rot13(char *s)
{
	char *encoded = s;
	char input[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char output[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*s != 0)
	{
		for (i = 0; input[i] != 0; i++)
		{
			if (*s == input[i])
			{
				*s = output[i];
				break;	/**This is a must*/
			}
		}
		s++;
	}
	return (encoded);
}
