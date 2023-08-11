#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: content to add
 *
 * Return: 1 if the file exists or -1 if it does not exist or fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileD;
	int nchars;
	int rwr;

	if (!filename)
		return (-1);
	fileD = open(filename, O_WRONLY | O_APPEND);
	if (fileD == -1)
		return (-1);

	if (text_content)
	{
		for (nchars = 0; text_content[nchars]; nchars++)
			;
		rwr = write(fileD, text_content, nchars);
		if (rwr == -1)
			return (-1);
	}
	close(fileD);
	return (1);
}
