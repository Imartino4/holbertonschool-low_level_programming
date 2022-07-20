#include "main.h"
#include <string.h>
/**
 * append_text_to_file - create a file
 * @filename: file to be created
 * @text_content: content of file
 * Return: 1 on succes, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fd_w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1); /*Empty file*/
	fd_w = write(fd, text_content, strlen(text_content));
	if (fd_w == -1)
		return (-1);
	close(fd);
	return (1);
}
