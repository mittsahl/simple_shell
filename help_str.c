#include "shell.h"

/**
 * _strcpy - copys a string
 * Return: pointer to copy
 * @dest: destination of copy
 * @src: original string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * _strlen - returns the length of string s
 * Return: length
 * @s: string passed from main
 */

int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
		;
	return (length);
}

/**
 * _strcat - concatenates two strings
 * Return: dest;
 * @src: src of first string
 * @dest: where both concat strings will end up
 */

char *_strcat(char *dest, char *src)
{
	int destLength, i;

	for (destLength = 0; dest[destLength]; destLength++)
		;
	for (i = 0; i < destLength + 1 && src[i] != '\0'; i++)
	{
		dest[destLength + i] = src[i];
	}
	dest[destLength + i] = '\0';
	return (dest);

}

/**
 * _strcmp - compares two strings
 * @s1: string
 * @s2: string
 *
 * Return: dest
 */

int _strcmp(char *s1, char *s2)
{
	for (; *s1 == *s2; s1++, s2++)
	{
		if (*s1 == '\0')
			return (0);
	}
	return (*s1 - *s2);
}

/**
 * delim_check - ensures input other than delim is present
 * @line: line being checked
 * @delim: delimiter
 * Return: 1 on pass -1 on failure
 */
int delim_check(char *line, char delim)
{
	int i = 0;

	if (line[i] == '\n' || line[i] == ':')
		return (-1);
	for (i = 0; line[i]; i++)
		if (line[i] != delim && line[i] != '\n')
			return (1);
	return (-1);
}
