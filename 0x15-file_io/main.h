#ifndef _FILE_
#define _FILE_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

ssize_t read_textfile(const char*, size_t);
int create_file(const char *, char *);
#endif
