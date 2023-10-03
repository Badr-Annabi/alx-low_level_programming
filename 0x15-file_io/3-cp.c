#include "main.h"

#define PERMISSIONS (S_IRUSE | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - function that copies the content of a file
 * to another file.
 * @argc: number of elements.
 * @argv: pointer to a string.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to;
	int n = 1024, m = 0;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from), exit(99);
	}
	while (n == 1024)
	{
		n = read(file_from, buffer, 1024);
		if (n == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		m = write(file_to, buffer, n);
		if (m < n)
			dprintf(STDERR_FILENO, "Error Can't write to %s\n", argv[2]), exit(99);
	}
	if (close(file_from) == -1)
		dprintf(STDERR_FILENO, "Error Can't close fd %d\n", file_from), exit(100);
	if (close(file_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
