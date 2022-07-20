#include "main.h"
/**
 * read_textfile - reads a text file and print it to SO
 * @filename: file to be readed and printed
 * @letters: number of letter to read and print
 * Return: Actual number of letters printed, 0 otherwhise.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, read, write;
	char *buffer = NULL;

	if (filename == NULL)
		return (0);

	buffer = malloc(letters);
	if (buffer = NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	read = read(fd, buffer, letters);
	if (read == -1)
		return (0);
	write = write(STDOUT_FILENO, buffer, read);
	if (writer == -1)
		return (0);
	close (fd);
	free(buffer);
	return (write);
}
