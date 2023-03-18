#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to be measured
 *
 * Return: the length of the string
 */
unsigned int _strlen(char *s)
{
	unsigned int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: the maximum number of bytes from s2 to concatenate
 *
 * Return: a pointer to the concatenated string, or NULL if it fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int len1, len2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	str = malloc(sizeof(char) * (len1 + n + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';

	return (str);
}
