#include "main.h"

/**
 * create_array - put an  array of size char c
 * @c: char as input
 * @size: insigned intiger input
 * Description: put an  array of size character c
 * Return: array pointer
 *
 */

char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	tab = malloc(sizeof(char) * size);
	if (!size || !tab)
		return (NULL);
	for (i = 0; i < size; i++)
		tab[i] = c;
	return (tab);
}
