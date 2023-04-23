#include "main.h"

/**
 * append_text_to_file - appends at end of file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fa;
	int nlett;
	int rw;

	if (!filename)
		return (-1);

	fa = open(filename, O_WRONLY | O_APPEND);

	if (fa == -1)
		return (-1);

	if (text_content)
	{
		for (nlett = 0; text_content[nlett]; nlett++)
			;

		rw = write(fa, text_content, nlett);

		if (rw == -1)
			return (-1);
	}

	close(fa);

	return (1);
}

