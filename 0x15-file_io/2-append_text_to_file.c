#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: files's name.
 * @text_content: the content that we want to add.
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	while (text_content[len])
		len++;
	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);
	write(file, text_content, len);

	return (1);
}
