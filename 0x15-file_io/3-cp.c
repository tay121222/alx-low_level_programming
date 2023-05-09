#include "main.h"
#define BUF_SIZE 1024

/**
 * print_error - Prints error message to stderr
 * @message: The error message to print
 * @file: the file that caused error ro NULL
 */
void print_error(char *message, char *file)
{
	if (file)
		dprintf(STDERR_FILENO, "Error: %s %s\n", message, file);
	else
		dprintf(STDERR_FILENO, "%s", message);
}

/**
 * open_file - opens a file and returns descriptor
 * @file: the file to open
 * @flags: file flags
 * @mode: the file mode
 *
 * Return: The file descriptor or -1;
 */
int open_file(char *file, int flags, int mode)
{
	int fd = open(file, flags, mode);

	if (fd == -1)
	{
		print_error("Can't open", file);
		exit(98);
	}

	return (fd);
}

/**
 * close_file - closes a file descriptor
 * @fd: file descriptor to close
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		print_error("Can't close fd", NULL);
		exit(100);
	}
}

/**
 * copy_file - copies a file from src to dest
 * @src: the source
 * @dest: the destination file
 *
 * Return: 0 on success, error on failure
 */
int copy_file(char *src, char *dest)
{
	int fd_from, fd_to, ret = 0;
	char buffer[BUF_SIZE];
	ssize_t b_read, b_write;

	fd_from =  open_file(src, O_RDONLY, 0);
	fd_to = open_file(dest, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((b_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		b_write = write(fd_to, buffer, b_read);
		if (b_write == -1 || b_write != b_read)
		{
			print_error("Can't write to", dest);
			ret = 99;
			break;
		}
	}

	if (b_read == -1)
	{
		print_error("Can't read from", src);
		ret = 98;
	}

	close_file(fd_from);
	close_file(fd_to);

	return (ret);
}

/**
 * main - copies the content of a file to another file
 * @argc: argument count;
 * @argv: argument vector
 *
 * Return: 0 on success, or an error code
 */
int main(int argc, char *argv[])
{
	int ret;

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to\n", NULL);
		exit(97);
	}

	ret = copy_file(argv[1], argv[2]);

	return (ret);
}
