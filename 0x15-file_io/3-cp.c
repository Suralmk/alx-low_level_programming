#include "main.h"

/**
 * main - copies the contents of one file to another file
 * @argc: number of arguments passed
 * @argv: array of argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd_read, fd_write, r, i, j;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_read = open(argv[1], O_RDONLY);
	if (fd_read < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_write = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(fd_read, buffer, BUFSIZ)) > 0)
	{
		if (fd_write < 0 || write(fd_write, buffer, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_read);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	i = close(fd_read);
	j = close(fd_write);
	if (i < 0 || j < 0)
	{
		if (i < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_read);
		if (j < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_write);
		exit(100);
	}
	return (0);
}
