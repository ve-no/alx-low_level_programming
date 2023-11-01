#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read and print to STDOUT.
 * @filename: text file to read
 * @letters: number lettre to read
 * Return: w- or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t val;
	ssize_t wr;
	ssize_t tr;

	if (filename == NULL)
		return (0);
	val = open(filename, O_RDONLY);
	if (val == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	tr = read(val, buff, letters);
	wr = write(STDOUT_FILENO, buff, tr);

	free(buff);
	close(val);
	return (wr);
}
