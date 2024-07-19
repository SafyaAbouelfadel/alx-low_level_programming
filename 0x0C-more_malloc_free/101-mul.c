#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"

/**
 * is_digit - checks if a string contains only digits
 * @s: string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */

int is_digit(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * print_error_and_exit - prints an error message and exits
 */
void print_error_and_exit(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}

/**
 * multiply - multiplies two numbers represented as strings
 * @num1: first number
 * @num2: second number
 *
 * Return: pointer to the result string
 */
char *multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int i, j, carry, n1, n2, sum;
	char *result, *start, *final_result;

	result = malloc(len1 + len2 + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1 + len2; i++)
		result[i] = '0';
	result[len1 + len2] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + (result[i + j + 1] - '0') + carry;
			carry = sum / 10;
			result[i + j + 1] = (sum % 10) + '0';
		}
		result[i + j + 1] += carry;
	}
	start = result;

	while (*start == '0' && *(start + 1) != '\0')
		start++;

	final_result = strdup(start);
	free(result);

	return (final_result);
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *result;

	if (argc != 3)
		print_error_and_exit();

	if (!is_digit(argv[1]) || !is_digit(argv[2]))
		print_error_and_exit();

	result = multiply(argv[1], argv[2]);
	if (result == NULL)
		print_error_and_exit();

	printf("%s\n", result);

	free(result);

	return (0);
}
