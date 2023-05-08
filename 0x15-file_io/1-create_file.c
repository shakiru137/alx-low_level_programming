#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: Pointer to file name.
 * @text_content: Pointer to file content.
 *
 * Return: 1 on SUCCESS, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fdescriptor;
	int toWrite, i = 0;

	if (filename == NULL)
		return (-1);
	/**
	 * O_CREAT indicate the file should be created if not exist
	 * O_RDWR indicate that the file should be open for both read and write mode
	 * O_TRUNC indicate if the file already exit for writing, it content should
	 * be deleted or truncate back to 0
	 * S_IRUSR & S_IWUSR indicate permmission rw- --- --- for the owner of file
	 */
	fdescriptor = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fdescriptor < 0)
		return (-1);
	/* write to the text_content if the file is not empty */
	if (text_content)
	{
		/* loop through and count number of characters present */
		while (text_content[i])
			i++;
		/* finally we write all the text_content to the file using */
		toWrite = write(fdescriptor, text_content, i);
		if (toWrite != i)
			return (-1);
	}
	/* close the file opened */
	close(fdescriptor);

	return (1);
}
