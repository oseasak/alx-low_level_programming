#include "main.h"

/**
 * read_textfile - reads text file then prints letters
 * @filename: filename
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed. If it fails, returns 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fa;
	ssize_t nrd, nod;
	char *ban;

	if (!filename)
		return (0);

	fa = open(filename, O_RDONLY);

	if (fa == -1)
		return (0);

	ban = malloc(sizeof(char) * (letters));
	if (!ban)
		return (0);

	nrd = read(fa, ban, letters);
	nod = write(STDOUT_FILENO, ban, nod);

	close(fa);

	free(ban);

	return (nod);
}
