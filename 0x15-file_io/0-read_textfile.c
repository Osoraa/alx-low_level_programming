#include "main.h"

/**
 * read_textfile - Reads a text file and prints to stdout.
 *
 * @filename: Name of file with contents to read.
 * @letters: Number of letters to read and print to stdout.
 *
 * Return: Actual number of letters it read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fildes, read_len;
	char *buffer = malloc(letters + 1);

	if (!filename)
		return (0);

	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
		return (0);

	read_len = read(fildes, buffer, letters);
	if (read_len == -1)
		return (0);
    
	dprintf(STDOUT_FILENO, "%s", buffer);
	free(buffer);
	close(fildes);

	return (read_len);
}
