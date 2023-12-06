#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024

/**
 * error_97 - Handles error 97 and exits the program
 * @str: The string to be printed
 */
void error_97(char *str)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	dprintf(STDERR_FILENO, "%s\n", str);
	exit(97);
}

/**
 * error_98 - Handles error 98 and exits the program
 * @str: The string to be printed
 */
void error_98(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
	exit(98);
}

/**
 * error_99 - Handles error 99 and exits the program
 * @str: The string to be printed
 */
void error_99(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
	exit(99);
}

/**
 * error_100 - Handles error 100 and exits the program
 * @fd: The file descriptor
 */
void error_100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * main - Copies content of a file to another file
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: 0 on success, 97, 98, 99 or 100 on failure
 */
int main(int ac, char **av)
{
	int file_from, file_to, bytes_rd, bytes_wr;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
		error_97("");

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		error_98(av[1]);

	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		error_99(av[2]);

	do {
		bytes_rd = read(file_from, buffer, BUFFER_SIZE);
		if (bytes_rd == -1)
			error_98(av[1]);

		bytes_wr = write(file_to, buffer, bytes_rd);
		if (bytes_wr == -1 || bytes_wr != bytes_rd)
			error_99(av[2]);
	} while (bytes_rd == BUFFER_SIZE);

	if (close(file_from) == -1)
		error_100(file_from);

	if (close(file_to) == -1)
		error_100(file_to);

	return (0);
}
