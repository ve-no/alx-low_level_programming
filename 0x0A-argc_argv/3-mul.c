#include "main.h"

/**
 * main - multiply 2numbers
 * @argc: number
 * @argv: array
 *
 * Return: 0
 */
int main(int ac, char **av)
{
	int Res;

	if (ac < 3 || ac > 3)
		return (printf("Error\n"));

	Res = atoi(av[1]) * atoi(av[2]);

	printf("%d\n", Res);

	return (0);
}
