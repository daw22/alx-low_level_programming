#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "main.h"


/**
 * main - copy the content of a file to another file.
 * @argc: number of arguments.
 * @argv: arguments
 * Return: 0 on sucess
 */
int main(int argc, char *argv[])
{

	int fd;
	ssize_t size;
	char buff[5];
	char elff[1];


	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file\n");
		exit(97); }
	fd = open(argv[1], O_RDWR);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't open from file %s\n", argv[1]);
		exit(98); }
	size = read(fd, buff, 4);
	if (size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98); }
	size = lseek(fd, 1, SEEK_SET);
	size = read(fd, elff, 1);
	if (elff[0] != 'E')
		exit(98);

	close(fd);
	return (0);
}
