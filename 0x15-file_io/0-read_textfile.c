#include "main.h"
#include <stdlib.h>

/**
* read_textfile -lir un fichier
* @letters: nbr of char.
* @filename: name
* Return: if success
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, ch_r, ch_w;
	char *s;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	s = malloc(sizeof(char) * letters);
	if (s == NULL)
	{
		close(fd);
		return (0);
	}
	ch_r = read(fd, s, letters);
	if (ch_r == -1)
	{
		free(s);
		close(fd);
		return (0);
	}
	ch_w = write(STDOUT_FILENO, s, ch_r);
	free(s);
	close(fd);
	if (ch_w == -1 || ch_r != ch_w)
	{
		return (0);
	}
	return (ch_r);
}
