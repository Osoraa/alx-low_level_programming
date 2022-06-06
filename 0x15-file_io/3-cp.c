#include "main.h"

/**
 * main - Entry point.
 *
 * @argc: Argument count.
 * @argv: Argument vector.
 *
 * Return: 0 if successful, others if not.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		return (97);
	}

	return (_cp(argv[1], argv[2]));
}

/**
 * _cp - Copies the contents of one file into another.
 *
 * @file_from: Source file.
 * @file_to: Destination file.
 *
 * Return: 0 if successful, others on error.
 */
int _cp(char *file_from, char *file_to)
{
	ssize_t from_file, to_file, read_len, write_len;
	char *buffer = malloc(1024);


	from_file = open(file_from, O_RDONLY);
	to_file = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	do {
		read_len = read(from_file, buffer, 1024);
		if (from_file == -1 || read_len == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", file_from);
			return (98);
		}

		write_len = write(to_file, buffer, strlen(buffer));
		if (to_file == -1 || write_len == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to file %s\n", file_to);
			return (99);
		}
	} while (strlen(buffer) == 1024 );

	if (close(from_file))
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %li\n", from_file);
		return (100);
	}
	if (close(to_file))
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %li\n", to_file);
		return (100);
	}
	free(buffer);
	return (0);
}

/* ssize_t read */
