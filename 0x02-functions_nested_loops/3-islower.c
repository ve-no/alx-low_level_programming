#include "main.h"

/**
 * _islower - check the code if lowercase
 * int c - the character to check
 * Return: 1 or 0.
 */

int	_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
