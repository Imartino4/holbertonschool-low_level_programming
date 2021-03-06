#include "main.h"
/**
 * read_textfile - reads a text file and print it to SO
 * @filename: file to be readed and printed
 * @letters: number of letter to read and print
 * Return: Actual number of letters printed, 0 otherwhise.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, fd_r, fd_w;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	fd_r = read(fd, buffer, letters);
	if (fd_r == -1)
		return (0);
	fd_w = write(STDOUT_FILENO, buffer, fd_r);
	if (fd_w == -1)
		return (0);
	close(fd);
	free(buffer);
	return (fd_w);
}
