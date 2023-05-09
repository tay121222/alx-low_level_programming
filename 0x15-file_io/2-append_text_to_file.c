#include "main.h"

/**
 * my_strlen - calculate lenght of a string
 * @s: string to calculate length
 *
 * Return: The length of the string
 */
size_t my_strlen(const char *s)
{
	size_t len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	size_t len;
	int b_write, fd;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	len = my_strlen(text_content);
	b_write = write(fd, text_content, len);

	close(fd);

	if (b_write > 0)
		return (1);
	else
		return (-1);
}
