#include "3-calc.h"
/**
 * main - performs simple operations.
 * @argc: number of given arguments
 * @argv: array of strings of given arguments
 * Return: 0 (Success)
 * or 98 if the number of arguments is wrong
 * or 99 if the operator is not valid
 * or 100 if the user tries to divide (/ or %) by 0
*/
int main(int argc, char **argv)
{
	int num1, num2, ans;
	int (*ptr_fun)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ptr_fun = get_op_func(argv[2]);
	if (ptr_fun == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	ans = ptr_fun(num1, num2);
	printf("%d\n", ans);
	return (0);
}
