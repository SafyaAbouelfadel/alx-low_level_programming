#include "3-calc.h"

/**
 * main - program that perfroms simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int (*o_func)(int, int), num1, num2, result;
	char a;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	o_func = get_op_func(argv[2]);

	if (!o_func)
	{
		printf("Error\n");
		exit(99);
	}

	a = *argv[2];

	if ((a == '/' || a == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = o_func(num1, num2);

	printf("%d\n", result);

	return (0);
}
