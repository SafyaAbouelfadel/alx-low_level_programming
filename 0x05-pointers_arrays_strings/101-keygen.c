#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random password
 *
 * password for the 101-crackme program
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char arr;
	int sum, num;

	sum = 0;	

	srand(time(0));

	while (sum < 2600)
	{
		arr = rand() % 120;
		sum += arr;
		putchar(arr);
		if ((2772 - sum)  < 120)
		{
			num = 2772 - sum;
			sum += num;
			putchar(num);
			break;
		}
	}

	return (0);
}
