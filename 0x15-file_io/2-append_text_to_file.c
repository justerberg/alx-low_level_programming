#include "main.h"
/**
 * _strlen - Always find the length of a string
 * @str:The pointer to the string
 *
 * Return:The length of the string
 */
size_t _strlen(char *str)
{
	size_t a;

	for (a = 0; str[a]; a++)
		;
	return (a);
}

/**
 * append_text_to_file - appends a text at the end of a file.
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fg;
	ssize_t len;

	if (filename == NULL)
		return (-1);
	fg = open(filename, O_WRONLY | O_APPEND);
	if (fg == -1)
		return (-1);
	if (text_content != NULL)
		len = write(fg, text_content, _strlen(text_content));
	close(fg);
	if (len == -1)
		return (-1);
	return (1);
}
