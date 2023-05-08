#include "main.h"

/**
 * append_text_to_file - append text tom
 * @filename: file where text is appended
 * @text_content: content to append
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, m, x;

    x = 0;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[x])
			x++;
		m = write(file_d, text_content, x);
		if (m != x)
			return (-1);
	}

	close(file_d);

	return (1);
}
