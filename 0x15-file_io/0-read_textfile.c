#include "main.h"

/**
 * read_textfile - reads text from a file and writes it to STDOUT
 * @filename: name of file to read
 * @letters: number of letters it shoud read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer = malloc(sizeof(char) * letters + 1);
	unsigned int i = 0, bytes_writen;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);
	while (i < letters)
	{
		char ch = fgetc(fp);

		if (ch == EOF)
			break;
		buffer[i] = ch;
		i++;
	}
	buffer[i] = '\0';
	bytes_writen = write(STDOUT_FILENO, buffer, i);
	if (bytes_writen != i)
		return (0);
	fclose(fp);
	free(buffer);
	return (bytes_writen);
}
