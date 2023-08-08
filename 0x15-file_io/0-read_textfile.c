#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the standard output.
 * @letters: the number of letters it should read and print
 * @filename: the file path
 * Return: the actual number of letters it could read and print
 * or 0 on fail
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ret;
	int fd;
	char *ptr;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	ptr = malloc(sizeof(char) * letters);
	if (ptr == NULL)
		return (0);
	ret = read(fd, ptr, letters);
	if (ret == -1)
	{
		free(ptr);
		close(fd);
		return (0);
	}
	write(STDOUT_FILENO, ptr, ret);
	free(ptr);
	close(fd);
	return (ret);
}
