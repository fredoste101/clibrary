#include <stdio.h>

#include "concatinate.h"

int main()
{
	printf("\nDriver For Concatinate\n");

	char * string1 = "This ";
	char * string2 = "is ";
	char * string3 = "a ";
	char * string4 = "concatinated ";
	char * string5 = "string";
	char * string6 = "\n";

	char * stringList[] = {"This ", "is ", "a ", "concatinated ", "\t","string", "\n"};

	printf("\n |%s| \n", concatinateList(stringList, 7));

	printf("\nTwo concatinated strings: %s\n", concatinate("hello ", "world-"));
	
}
