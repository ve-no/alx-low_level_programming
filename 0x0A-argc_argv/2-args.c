#include "main.h"
/**
 * main - writ arguments
 * @ac: nbr arry
 * @av: array
 *
 * Return: 0 success
 */
int main(int ac, char **av)
{
	while (*av)
		printf("%s\n", *av++);
	return (0);
}
