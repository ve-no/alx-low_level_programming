#include "main.h"

/**
 * brief checks for lowercase character
 *
 * param c character to be checked
 * return int
 */
int	_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
