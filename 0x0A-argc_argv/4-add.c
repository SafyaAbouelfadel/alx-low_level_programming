#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: return 0 (Success), or return 1 (Success)
*/

int main(int argc, char *argv[])
{
	int sum = 0;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
				return (printf("Error\n"));
		}
		sum += atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);
}
