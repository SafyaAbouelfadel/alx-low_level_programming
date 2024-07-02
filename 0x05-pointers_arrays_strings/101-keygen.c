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
	int arr[100];
	int sum, num, i;

	sum = 0;	

	srand(time(0));

	while (sum < 2600)
	{
		arr[i] = rand() % 120;
		sum += (arr[i]);
		putchar(arr[i]);
		if ((2772 - sum)  < 120)
		{
			num = 2772 - sum - '0';
			sum += num;
			putchar(num + '0');
			break;
		}
	}

	return (0);
}
