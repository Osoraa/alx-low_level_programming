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
	int fildes;
	char *buffer = malloc(letters + 1);
	ssize_t len_rd;

	if (!filename)
		return (0);

	fildes = open(filename, O_RDONLY);
	if (fildes == -1)
		return (0);

	len_rd = read(fildes, buffer, letters);
	if (len_rd == -1)
		return (0);

	printf("%s", buffer);
	free(buffer);
	close(fildes);

	return (len_rd);
}
