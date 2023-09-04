#include "main.h"

/**
 * _strdup - duplicate to a new  location
 * @str: caracter chaine
 * Return: 0
 */

char *_strdup(char *str)
{
	char *dup;
	int i = 0;

	if (!str)
		return (NULL);
	dup = malloc(sizeof(char) * strlen(str) + 1);
	if (!dup)
		return (NULL);
	for (i = 0; str[i]; i++)
		dup[i] = str[i];
	return (dup);
}
