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
	int na;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	na = open(filename, O_RDONLY);

	if (na == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(na, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(na);

	free(buf);

	return (nwr);
}
