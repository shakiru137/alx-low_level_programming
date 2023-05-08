#include "main.h"
/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output.
 * @filename: Pointer to the file.
 * @letters: Variable holding the number of letters it ahould read.
 *
 * Return: actual number of letters it could read and print or 0 if fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdescriptor;
	char *buffer;
	ssize_t toWrite, toRead;

	/* Check if the the filename is empty */
	if (filename == NULL)
		return (0);
	/* Allocate space to buffer using malloc */
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	/* open read and store file to store fdescriptor */
	fdescriptor = open(filename, O_RDONLY);
	if (fdescriptor == -1)
		return (0);
	/* read from the file and store number of bytes present */
	toRead = read(fdescriptor, buffer, letters);
	if (toRead == -1)
	{
		close(fdescriptor);
		free(buffer);
		return (0);
	}
	/* write to the standard output and stores the bytes written */
	toWrite = write(STDOUT_FILENO, buffer, toRead);
	if (toWrite == -1)
	{
		close(fdescriptor);
		free(buffer);
		return (0);
	}
	close(fdescriptor);
	return (toRead);
}
