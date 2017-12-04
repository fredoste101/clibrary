#include <string.h>
#include <stdlib.h>

#include "concatinate.h"


char * concatinate(char ** stringList, unsigned int listSize)
{
	unsigned int concatStrLen = 0;
	int i;
	for(i = 0; i < listSize; i++)
	{
		concatStrLen += strlen(stringList[i]);
	}

	if(concatStrLen == 0)
	{
		return NULL;
	}

	char * concatStr = (char *)malloc(sizeof(char) * concatStrLen + sizeof(char));

	for(i = 0; i < listSize; i++)
	{
		strcat(concatStr, stringList[i]);
	}

	return concatStr;
	
}
