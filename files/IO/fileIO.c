#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>


//Return string with line, or NULL if no more lines.
char * readLine(int fd)
{
	int readVal;
	char readChar;
	unsigned int lineLen = 0;
	
	while((readVal = read(fd, &readChar, sizeof(char))) != EOF && readVal >= 0)
	{
		lineLen++;
		if(readChar == '\n')
		{
			break;
		}
	}

	if(readVal == -1)
	{
		printf("Error in read!\n");
		exit(1);
	}

	lseek(fd, (-1) * lineLen, SEEK_CUR);

	if(lineLen == 0)
	{
		return NULL;
	}

	char * line = (char *)malloc(sizeof(char) * lineLen + sizeof(char));
	char * currentChar = line;

	
	for(lineLen; lineLen > 0; lineLen--)
	{
		if(0 > read(fd, &readChar, sizeof(char)))
		{
			printf("Error when reading!");
			exit(1);
		}
		printf("char %c\n", readChar);
		*currentChar = readChar;
		currentChar++;
	}
	currentChar = '\0';

	return line;
	
}
