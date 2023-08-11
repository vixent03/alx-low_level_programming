#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content to write to the file.
 *
 * Return: 1 if success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fileD;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);
	fileD = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fileD == -1)
		return (-1);
	if (!text_content)
		text_content = "";
	for (nletters = 0; text_content[nletters]; nletters++)
		;
	rwr = write(fileD, text_content, nletters);
	if (rwr == -1)
		return (-1);
	close(fileD);
	return (1);
}
