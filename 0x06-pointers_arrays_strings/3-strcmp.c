#include "main.h"
/**
 * _strcmp - compare two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equal, anothe number if not.
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\n' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
