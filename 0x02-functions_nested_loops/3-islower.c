#include "main.h"

/**
 * _islower - check the code if lowercase
 *
 * Return: 1 or 0.
 * c: is a variable int
 */
int	_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
