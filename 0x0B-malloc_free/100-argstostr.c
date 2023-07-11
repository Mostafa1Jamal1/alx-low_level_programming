#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 * Each argument should be followed by a \n in the new string
 *
 * @ac: the number of arguments
 * @av: a vector to strings
 *
 * Return: a pointer to a new string
 * or NULL if it fails or if ac == 0 or av == NULL
*/
char *argstostr(int ac, char **av)
{
	char *s, *size, *str;
	int i, j, tsize = 0;

	if (ac == 0 || av == 0)
		return (0);
	size = malloc(ac * sizeof(int));
	if (size == 0)
		return (0);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (*(*(av + i) + j) != 0)
			j++;
		size[i] = j;
		tsize += j;
	}
	s = malloc(tsize + (ac * sizeof('\n')));
	if (s == 0)
		return (0);
	str = s;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < size[i]; j++)
		{
			*s = *(*(av + i) + j);
			s++;
		}
		*s = '\n';
		s++;
	}
	free(size);
	return (str);
}
