
#include "main.h"

/**
 * read_textfile - reads  text of a  file and prints to the standard output
 * @filename: name of the file
 * @letters: number of letters which  will be printed
 * Return: ihe number of letters printed, or 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int file_d;
int i;
ssize_t type;
char *buffer;
if (filename == NULL)
{
return (0);
}
	buffer = malloc(sizeof(char) * letters);
	file_d = open(filename, O_RDONLY);
	if (file_d < 0)
		return (0);

	if (buffer == NULL)
		return (0);

	i = read(file_d, buffer, letters);

	buffer[i] = '\0';

	close(file_d);

	type = write(STDOUT_FILENO, buffer, i);
	free(buffer);
	return (type);
}
