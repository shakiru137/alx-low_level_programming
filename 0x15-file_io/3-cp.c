#include "main.h"
/**
 * close_fd - function that close the fd and check for fails
 * @cl_fdR: variable to close fdescriptor_R
 * @cl_fdW: variable to close fdescriptor_W
 * @fdescriptor_R: source file
 * @fdescriptor_W: destination file
 * Return: Nothing
 */
void close_fd(int cl_fdR, int cl_fdW, int fdescriptor_R, int fdescriptor_W)
{
	if (cl_fdR < 0 || cl_fdW < 0)
	{
		if (cl_fdR < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdescriptor_R);
		if (cl_fdW < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdescriptor_W);
		exit(100);
	}
}
/**
 * main - program that copies the content of a file to another file.
 * @argc: argument(s) count.
 * @argv: argument(s) vector.
 * Return: 0 Always.
 */
int main(int argc, char *argv[])
{
	int fdescriptor_W, fdescriptor_R, readings, cl_fdR, cl_fdW;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdescriptor_R = open(argv[1], O_RDONLY);
	if (fdescriptor_R < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fdescriptor_W = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fdescriptor_W < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fdescriptor_R);
		exit(99);
	}
	while ((readings = read(fdescriptor_R, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fdescriptor_W, buffer, readings) != readings)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fdescriptor_R);
			close(fdescriptor_W);
			exit(99);
		}
	}
	if (readings < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cl_fdR = close(fdescriptor_R);
	cl_fdW = close(fdescriptor_W);
	close_fd(cl_fdR, cl_fdW, fdescriptor_R, fdescriptor_W);
	return (0);
}
