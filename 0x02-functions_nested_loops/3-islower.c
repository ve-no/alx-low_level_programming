#include "main.h"

/**
 * _islower - check the code if lowercase
 *
 * parameter c: is a variable int
 * Return: 1 or 0.
 */
int	_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
