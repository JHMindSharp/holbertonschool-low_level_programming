#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: Number of letters it could read and print, 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, bytes_read, bytes_written;
	char buffer[1024]; /* Adjust buffer size as needed */

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0); /* Failed to open the file */

	bytes_read = read(file_descriptor, buffer, letters);
	if (bytes_read == -1)
	{
		close(file_descriptor);
		return (0); /* Failed to read the file */
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	close(file_descriptor);

	if (bytes_written == -1 || bytes_written != bytes_read)
		return (0); /* Write failed or didn't write expected bytes */

	return (bytes_written);
}
