#include "main.h"
#include <stdlib.h>
/**
 * str_concat - input together for size
 * @s1: input nbr one
 * @s2: input nbr two
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *join;
	int i = 0, j = 0;
	if (!s1)
		s1 = "\0";
	if (!s2)
		s2 = "\0";
	join = malloc(strlen(s1) + strlen(s2) + 1);
	if (!join)
		return (NULL);
	while (s1[i])
		join[j++] = s1[i++];
	i = 0;
	while (s1[i])
		join[j++] = s1[i++];
	return (join);
}
