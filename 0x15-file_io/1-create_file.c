#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fad;
	int nlett;
	int rw;

	if (!filename)
		return (-1);

	fad = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fad == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nlett = 0; text_content[nlett]; nlett++)
		;

	rw = write(fad, text_content, nlett);

	if (rw == -1)
		return (-1);

	close(fad);

	return (1);
}
