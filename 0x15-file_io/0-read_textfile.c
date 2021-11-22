#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX
 *                 standard output.
 * @filename: file to read.
 * @letters: number of letters to read.
 *
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t wr_bytes, rd_bytes;
	char *buffer;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	rd_bytes = read(fd, buffer, letters);
	if (rd_bytes == -1)
	{
		free(buffer);
		return (0);
	}
	wr_bytes = write(STDOUT_FILENO, buffer, rd_bytes);
	if (wr_bytes == -1)
	{
		free(buffer);
		return (0);
	}
	close(fd);
	free(buffer);
	return (wr_bytes);
}
