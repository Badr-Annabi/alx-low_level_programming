#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output.
 * @filename: file name.
 * @letters:  the number of letters it should
 * read and print.
 * Return: 0 if the file can not be opened or read
 * or  filename is NULL
 * or  write fails or does not write the
 * expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, rd, wr;
	char *txt;

	txt = malloc(letters);
	if (txt == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(txt);
		return (0);
	}

	rd = read(file, txt, letters);
	wr = write(STDOUT_FILENO, txt, rd);

	close(file);

	return (wr);

}
