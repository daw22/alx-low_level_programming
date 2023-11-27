#include "main.h"
#include <sys/stat.h>

int close_files(FILE *, FILE *);
/**
 * main - Entry point
 * @argc: number of args
 * @argv: list of args
 *
 * Return: 0 always
 */
int main(int argc, char **argv)
{
	FILE *ffp, *ftp;
	char buffer[1024];
	int byte_read;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		return (97);
	}
	ffp = fopen(argv[1], "r");
	if (access(argv[1], F_OK) == 0 && ffp != NULL)
	{
		if (access(argv[2], F_OK) == 0)
		{
			truncate(argv[2], 0);
			ftp = fopen(argv[2], "a");
		}
		else
		{
			ftp = fopen(argv[2], "a");
			chmod(argv[2], S_IRUSR | S_IWUSR | S_IWGRP | S_IRGRP | S_IROTH);
		}
		while (1)
		{
			byte_read = fread(buffer, sizeof(char), 1024, ffp);
			if (byte_read <= 0)
				break;
			fwrite(buffer, sizeof(char), byte_read, ftp);
		}
		return (close_files(ffp, ftp));
	}
	else
	{
		dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't read form file", argv[1]);
		return (98);
	}
}

/**
 * close_files - closes file
 * @file1: file pointer one
 * @file2: file pointer two
 *
 * Return: 100 if unable to close
 */
int close_files(FILE *file1, FILE *file2)
{
	int cs1 = fclose(file1);
	int cs2 = fclose(file2);

	if (cs1 != 0 || cs2 != 0)
	{
		dprintf(STDERR_FILENO, "%s", "Error: Can't close fd");
		dprintf(STDERR_FILENO, "%d\n", cs1 != 0 ? fileno(file1) : fileno(file2));
		return (100);
	}
	else
		return (0);
}
