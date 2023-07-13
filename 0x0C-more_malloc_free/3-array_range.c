#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 *
 * @min: the minimum value of the array.
 * @max: the maximum value of the array.
 *
 * Return: a pointer to the array with ordered values from min to max
 * or NULL, if min > max or, if fails.
*/
int *array_range(int min, int max)
{
    int *ptr, i;

    if (min > max)
        return (0);
    ptr = malloc(sizeof(int) * (max - min + 1));
    if (ptr != 0)
    {
        for (i = 0; i < (max - min + 1); i++)
            *(ptr + i) = min + i;
    }
    return (ptr);
}
