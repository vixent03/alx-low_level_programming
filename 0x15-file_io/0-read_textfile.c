#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: name of the file
 * @letters: number of letters to be printed.
 *
 * Return: number of chars printed, 0 if it fails
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fileD;
	ssize_t nread, nwrite;
	char *buffer;

	if (!filename)
		return (0);
	fileD = open(filename, O_RDONLY);
	if (fileD == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);
	nread = read(fileD, buffer, letters);
	nwrite = write(STDOUT_FILENO, buffer, nread);
	close(fileD);
	free(buffer);
	return (nwrite);
}
