#include "main.h"

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i])
		else
			printf9"%d", a[i])
	}
	printf("\n");
}
