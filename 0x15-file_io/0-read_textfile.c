#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * @filename: file to read
 * @letters: total letters count to read and print
 *
 * Return: returns the number of letters or 0 if error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_bytes_read, num_bytes_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	num_bytes_read = read(fd, buffer, letters);
	if (num_bytes_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	num_bytes_written = write(STDOUT_FILENO, buffer, num_bytes_read);
	if (num_bytes_written == -1 || num_bytes_written != num_bytes_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (num_bytes_written);
}
