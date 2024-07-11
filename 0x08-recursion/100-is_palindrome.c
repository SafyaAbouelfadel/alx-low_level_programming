#include "main.h"

int _strlen_recursion(char *s);
int _is_pali(char *s, int i, int length);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to reverse
 *
 * Return: 1 if it is, 0 it's not
*/

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (0);

	return (_is_pali(s, 0, _strlen_recursion(s)));
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
*/

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
/**
 * _is_pali - checks recursively the characters for palindrome
 * @s: string to check
 * @itr: iterate
 * @length: length of the string
 *
 * Return: 1 if palindrome, 0 if not
*/

int _is_pali(char *s, int itr, int length)
{
	if (*(s + itr) != *(s + length - 1))
		return (0);
	if (itr >= length)
		return (1);

	return (is_pali(s, itr + 1, len - 1));
}
