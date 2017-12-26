#include <string.h>
#include <stdlib.h>

#include "concatinate.h"


char * concatinate(char * str1, char * str2)
{
	char * retStr = (char *)malloc(sizeof(char) * (strlen(str1) + strlen(str2) + 1));

	int i;
	for(i = 0; i < strlen(str1); i++)
	{
		retStr[i] = str1[i];
	}
	int j;
	for(j = 0; j < strlen(str2); i++, j++)
	{
		retStr[i] = str2[j];
	}
	retStr[i] = '\0';
	
	return retStr;
}

char * concatinateList(char ** stringList, unsigned int listSize)
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
