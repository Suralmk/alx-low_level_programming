#include "main.h"

/**
 * create_file - creating a file
 * @filename: A pointer to the new file
 * @text_content: A pointer to a string to write to the new file
 *
 * Return: If the function fails - -1
 */
int create_file(const char *filename, char *text_content)
{
	int open, write, num;

    num = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		for (num = 0; text_content[num];)
			num++;
	}

	open = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write = write(open, text_content, num);

	if (open == -1 || write == -1)
		return (-1);

	close(open);

	return (1);
}
