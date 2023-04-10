#include "main.h"

/**
 * append_text_to_file - appends text at the end
 * @filename: file where the text is appended
 * @text_content: content that is appended to the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, type, i;

	i = 0;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);
	if (file_d < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[i])
			i++;
		type = write(file_d, text_content, i);
		if (type != i)
			return (-1);
	}

	close(file_d);
return (1);
}
