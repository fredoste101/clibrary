#include <stdlib.h>
#include <regex.h>
#include <sys/types.h>
#include <string.h>
#include <stdio.h>

#include "searchString.h"


//Clean this shit up plx
char * betweenGetString(char * beginString, char * endString, char * searchString)
{
	char * pBeginString = beginString;
	char * pEndString = endString;
	char * extractStart;
	
	while(*beginString != '\0')
	{
		if(*searchString == '\0')
		{
			return NULL;
		}
		
		if(*beginString == *searchString)
		{
			beginString++;
			if(*beginString == '\0')
			{
				break;
			}
		}
		else
		{
			beginString = pBeginString;
		}
		
		searchString++;
	}

	searchString++;
		
	extractStart = searchString;
	unsigned int length = 0;

	while(*endString != '\0')
	{
		if(*searchString == '\0')
		{
			return NULL;
		}

		if(*endString == *searchString)
		{
			endString++;
			if(*endString == '\0')
			{
				break;
			}
		}
		else
		{
			endString = pEndString;
		}

		searchString++;
		length++;
	}

	char * between = (char *)malloc(sizeof(char) + sizeof(char) + length);
	char * temp = between;
	
	for(length; length > 0; length--)
	{
		*between = *extractStart;
		between++;
		extractStart++;
	}
	*between = '\0';

	return temp;
	
}

//Below: Maybe i fix this sometime in the future (probably not though)


/*
static regmatch_t * regExpList(const char * regExp, const char * string, size_t numberOfMatches);

int indexSearch(const char * regExp, const char * string)
{
	printf("Helllo?");
	regmatch_t * match = regExpList(regExp, string, 1);
	printf("Helllo?");
	
	if(!match)
	{
		return -1;
	}
	
	int retVal = match[0].rm_so;
	free(match);
	return retVal;
}


//Bullshit segmentation fault somewhere...
static regmatch_t * regExpList(const char * regExp, const char * string, size_t numberOfMatches)
{
	printf("\nregExpList Begin ");
	fflush(stdout);
	
	regex_t * preg;
	//regmatch_t * indexList = (regmatch_t * )malloc(sizeof(regmatch_t) * (numberOfMatches + 1));
	regmatch_t indexList[2];

	printf(" After malloc? ");
	fflush(stdout);
	
	if(regcomp(preg, regExp, REG_EXTENDED))
	{
		printf(" no compile ");
		fflush(stdout);
		regfree(preg);
		//free(indexList);
		return NULL;
	}

	printf(" After compile? ");
	fflush(stdout);
	
	if(regexec(preg, string, numberOfMatches, indexList, 0))
	{
		printf(" no regexec ");
		fflush(stdout);
		regfree(preg);
		//free(indexList);
		return NULL;
	}

	printf(" regExpList End ");
	fflush(stdout);

	regfree(preg);
	return indexList;
}
*/
