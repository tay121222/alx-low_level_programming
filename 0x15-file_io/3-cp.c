#include "main.h"
#define BUF_SIZE 1024

/**
 * open_file2 - opens a file and returns descriptor
 * @file: the file to open
 * @flags: file flags
 * @mode: the file mode
 *
 * Return: The file descriptor or -1;
 */
int open_file2(char *file, int flags, int mode)
{
	int fd = open(file, flags, mode);

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (fd);
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

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from File %s\n", file);
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
	if (close(fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fd);
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
	int b_read, b_write;

	fd_from =  open_file(src, O_RDONLY, 0);
	fd_to = open_file2(dest, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	do {
		b_read = read(fd_from, buffer, sizeof(buffer));
		if (b_read == -1)
		{
			dprintf(STDERR_FILENO, "Can't read from file %s\n", src);
			ret = 98;
			break;
		}
		else if (b_read == 0)
			break;
		b_write = write(fd_to, buffer, b_read);
		if (b_write == -1 || b_write != b_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			ret = 99;
			break;
		}
	} while (b_write >= BUF_SIZE);

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
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	ret = copy_file(argv[1], argv[2]);

	return (ret);
}
