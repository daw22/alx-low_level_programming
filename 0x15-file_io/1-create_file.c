#include "main.h"
#include "sys/stat.h"
#include "sys/types.h"

/**
 * create_file - creates a file and writes on it
 * @filename: file name
 * @text_content: text content of the new file
 *
 * Return: 1 on success, -1 on failer
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	int bytes_writen;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	if (access(filename, F_OK) == 0)
	{
		fp = fopen(filename, "w");
		if (fp == NULL)
			return (-1);
		truncate(filename, 0);
		bytes_writen = fprintf(fp, "%s", text_content);
		if (bytes_writen < 0)
			return (-1);
	}
	else
	{
		fp = fopen(filename, "w");
		if (fp == NULL)
			return (-1);
		if (chmod(filename, S_IRUSR | S_IWUSR))
			return (-1);
		bytes_writen = fprintf(fp, "%s", text_content);
		if (bytes_writen < 0)
			return (-1);
	}
	return (1);
}
