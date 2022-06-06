#include "main.h"

/**
 * append_text_to_file - Appends text to a file.
 *
 * @filename: Name of the file to create.
 * @text_content: As the name implies, duh.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fildes, write_len;

	if (!filename)
		return (-1);

	fildes = open(filename, O_WRONLY | O_APPEND);
	if (fildes == -1)
		return (-1);

	if (text_content)
	{
		write_len = write(fildes, text_content, strlen(text_content));
		if (write_len == -1)
			return (-1);
	}
	close(fildes);

	return (1);
}
