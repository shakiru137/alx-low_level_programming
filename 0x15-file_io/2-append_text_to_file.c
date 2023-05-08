#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: Pointer to the file name.
 * @text_content: Pointer to string to write to the file.
 *
 * Return: 1 on SUCCESS, -1 if fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdescriptor, toWrite, i = 0;

	if (filename == NULL)
		return (-1);
	/* create and open file in append mode */
	fdescriptor = open(filename, O_WRONLY | O_APPEND);
	if (fdescriptor < 0)
		return (-1);
	/* if text_content is not empty */
	if (text_content != NULL)
	{
		/* Count the content of the text_content and use */
		/* a loop to write them to the file created */
		while (text_content[i] != '\0')
			i++;
		toWrite = write(fdescriptor, text_content, i);
		/* check if failure occur when writing to the file */
		if (toWrite != i)
			return (-1);
	}
	/* close the file created */
	close(fdescriptor);

	return (1);
}
