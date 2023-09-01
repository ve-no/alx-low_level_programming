#include "main.h"
/**
 * main - writ arguments
 * @argc: nbr arry
 * @argv: array
 *
 * Return: 0 success
 */
int main(int ac, char **av)
{
	while (*av)
		printf("%s\n", *av++);
	return (0);
}
