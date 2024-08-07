#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 *	make change for an amount of money
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), or 1 (Error)
 */
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
	int i, least = 0;
	int num = atoi(argv[1]);
	int coins[] = {25, 10, 5, 2, 1};

	for (i = 0; i < 5; i++)
	{
		if (num >= coins[i])
		{
			least += num / coins[i];
			num = num % coins[i];
		}
	}
		printf("%d\n", least);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
