#include "main.h"
/**
 * check_num - check - string
 * @str: array char
 *
 * Return: 0
 */
int check_num(char *str)
{
	unsigned int count;

	count = -1;
	while (str[++count])
		if (!isdigit(str[count]))
			return (0);
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count argv array
 * @argv: Arguments array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int count;
	int transf = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
			transf += atoi(argv[count]);
		else
			return (printf("Error\n"));
		count++;
	}
	printf("%d\n", transf);
	return (0);
}
