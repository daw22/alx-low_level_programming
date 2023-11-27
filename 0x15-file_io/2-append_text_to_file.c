#include "main.h"

/**
 * append_text_to_file - appends texts to end of file
 * @filename: file name(path)
 * @text_content: text to append
 *
 * Return: 1 on success, -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;

	if (filename == NULL)
		return (-1);
	if (access(filename, F_OK) == 0)
	{
		fp = fopen(filename, "a");
		if (fp == NULL)
			return (-1);
		if (text_content == NULL)
			return (1);
		fprintf(fp, "%s", text_content);
		fclose(fp);
		return (1);
	}
	else
		return (-1);
}
