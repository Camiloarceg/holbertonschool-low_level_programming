#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file.
 * @text_content: content to be append to the file.
 *
 * Return:1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr_bytes = 0, len = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND, 0664);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
			len++;
		wr_bytes = write(fd, text_content, len);
		if (wr_bytes == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
