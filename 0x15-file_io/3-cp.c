#include "main.h"
#define BYTE_SIZE 1024

/**
 * print_usage - print usage
 * Return: void
*/
void print_usage(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
}

/**
 * print_error - print error
 * @message: error message
 * @filename: name of file
 * @code: exit code
 * Return: void
*/
void print_error(const char *message, const char *filename, int code)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", message, filename);
	exit(code);
}

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
*/
int main(int argc, char *argv[])
{
	char *from_filename, *to_filename, buffer[BYTE_SIZE];
	int source_fd, dest_fd, bytes_read, bytes_written;

	if (argc != 3)
		print_usage();
	from_filename = argv[1], to_filename =  argv[2];
	dest_fd = open(from_filename, O_RDONLY);
	if (dest_fd == -1)
	{
		print_error("Can't read from file", argv[1], 98);
	}
	source_fd = open(to_filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (source_fd == -1)
	{
		print_error("Can't write to", argv[2], 99);
	}
	bytes_read = read(dest_fd, buffer, BYTE_SIZE);
	if (bytes_read == -1)
	{
		print_error("Can't read from file", argv[1], 98);
	}
	while (bytes_read > 0)
	{
		bytes_written = write(source_fd, buffer, bytes_read);
		if (bytes_written == -1)
		{
			print_error("Can't write to", argv[2], 99);
		}
		bytes_read = read(dest_fd, buffer, BYTE_SIZE);
	}
	if (close(dest_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest_fd),
		exit(100);
	if (close(source_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", source_fd),
		exit(100);
	return (0);
}
