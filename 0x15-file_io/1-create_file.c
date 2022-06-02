#include "main.h"

/**
 * create_file - Creates a file.
 *
 * @filename: Name of the file to create.
 * @text_content: As the name implies, duh.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fildes;

	if (!filename)
		exit(-1);

	fildes = open(filename, O_CREAT | O_WRONLY, 00600);
	if (fildes == -1)
		exit(-1);

	if (text_content)
		write(fildes, text_content, strlen(text_content) + 1);

	close(fildes);
	return (1);
}
