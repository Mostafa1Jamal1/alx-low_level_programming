#include "variadic_functions.h"
/**
 * print_all - prints anything.
 * @format:  is a list of types of arguments passed to the function
 * c: char
 * i: integer
 * f: float
 * s: char * (if the string is NULL, print (nil) instead
 * any other char should be ignored
*/
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	void *argument;
	print_t t[] = {{print_c, 'c'}, {print_i, 'i'},
					{print_f, 'f'}, {print_s, 's'}};
	va_list arg;

	va_start(arg, format);
	while (*(format + j) != 0)
	{
		while (*(format + j) != t[i].frmt && i < 4)
			i++;
		if (i < 4)
		{
			argument = va_arg(arg, void *);
			t[i].func(argument);
		}
		j++;
	}
	va_end(arg);
	printf("\n");
}
/**
 * print_c - prints a char.
 * @ch: the char to print
*/
void print_c(const void *ch)
{
	printf("%c", *(char *)ch);
}
/**
 * print_i - prints an integer.
 * @i: the integer to print
*/
void print_i(const void *i)
{
	printf("%d", *(int *)i);
}
/**
 * print_f - prints a float.
 * @f: the float to print
*/
void print_f(const void *f)
{
	printf("%f", *(float *)f);
}
/**
 * print_s - prints a string.
 * @s: the string to print
*/
void print_s(const void *s)
{
	printf("%s", (char *)s);
}
