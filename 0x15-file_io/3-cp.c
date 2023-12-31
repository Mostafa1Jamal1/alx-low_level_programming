#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @argc: number of given parameter
 * @argv: array of strings of the given parameters
 * Return: 0 Success
*/

int main(int argc, char **argv)
{
	int fdfrom, fdto, readnum = 1024, writenum, c;
	char buf[1024];
	mode_t oldmask = umask(0);
	/* Check number of arguments */
	if (argc != 3)
		exitwith97();
	/* Open and check open for the file to read (copy from) */
	fdfrom = open(argv[1], O_RDONLY);
	if (fdfrom == -1)
		exitwith98(argv[1]);
	/* Open and check open for the file to write (copy to) */
	fdto = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	umask(oldmask);
	if (fdto == -1)
		exitwith99(argv[2]);
	while (readnum == 1024)
	{	/* Read the file to copy from and check */
		readnum = read(fdfrom, buf, 1024);
		if (readnum == -1)
			exitwith98(argv[1]);
		/* Write to the new file and check */
		writenum = write(fdto, buf, readnum);
		if (writenum == -1)
			exitwith99(argv[2]);
	}
	/* Close and check close */
	c = close(fdfrom);
	if (c == -1)
		exitwith100(fdfrom);
	c = close(fdto);
	if (c == -1)
		exitwith100(fdto);
	return (0);
}

/**
 * exitwith97 - exit with value 97 and print error message
*/
void exitwith97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * exitwith98 - exit with value 98 and print error message
 * @str: the first argument passed to your program
*/
void exitwith98(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
	exit(98);
}

/**
 * exitwith99 - exit with value 99 and print error message
 * @str: the second argument passed to your program
*/
void exitwith99(char *str)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
	exit(99);
}

/**
 * exitwith100 - exit with value 100 and print error message
 * @fd: the value of the file descriptor
*/
void exitwith100(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
