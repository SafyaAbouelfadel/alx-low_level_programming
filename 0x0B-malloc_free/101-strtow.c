#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * count_words - counts the number of words in a string
 * @str: the string to count words in
 *
 * Return: number of words in the string
 */
int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
	if (*str == ' ')
		in_word = 0;
	else if (!in_word)
	{
		in_word = 1;
		count++;
	}
	str++;
	}
	return (count);
}
/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: pointer to an array of strings (words), or NULL if it fails
 */
char **strtow(char *str)
{
	char **words;
	char *word_start;
	int i, j, word_len, num_words;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);
	words = (char **)malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0; i < num_words; i++)
	{
	while (*str == ' ')
		str++;

	word_start = str;
	word_len = 0;
	while (*str != ' ' && *str != '\0')
	{
		word_len++;
		str++;
	}
	words[i] = (char *)malloc((word_len + 1) * sizeof(char));
	if (words[i] == NULL)
	{
	for (j = 0; j < i; j++)
		free(words[j]);
	free(words);
	return (NULL);
	}
	for (j = 0; j < word_len; j++)
		words[i][j] = word_start[j];
	words[i][word_len] = '\0';
	}
	words[num_words] = NULL;
	return (words);
}
