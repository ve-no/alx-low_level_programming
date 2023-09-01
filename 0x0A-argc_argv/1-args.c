#include "main.h"

/**
 * main - write the number of arguments
 * @argc: number
 * @argv: array
 *
 * Return:  0
 */

int main(int ac, char **av)
{
	(void) av;
	printf("%d\n", ac - 1);

	return (0);
}
