#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int file_r, file_d, x, m_close, n;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_r = open(argv[1], O_RDONLY);
	if (file_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_d = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((x = read(file_r, buf, BUFSIZ)) > 0)
	{
		if (file_d < 0 || write(file_d, buf, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(file_r);
			exit(99);
		}
	}
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	m_close = close(file_r);
	n = close(file_d);
	if (m_close < 0 || n < 0)
	{
		if (m_close < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_r);
		if (n < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_d);
		exit(100);
	}
	return (0);
}
