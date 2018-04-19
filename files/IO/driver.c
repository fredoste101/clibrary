#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

#include "fileIO.h"

int main()
{
	printf("\nDriver For fileIO\n");

	char * filePath = "input";
	int fd = open(filePath, O_RDONLY);

	if(fd == -1)
	{
		printf("Could not open file!\n");
		exit(1);
	}

	char * line = readLine(fd);

	printf("\nLine is => |%s|\n", line);

	close(fd);
	
}
