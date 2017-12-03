#include <stdio.h>
#include <stdlib.h>


#include "searchString.h"


int main()
{
	printf("\nDriver for searchString\n");

	char * string = "test=2324 ";
	char * string2 = "this is the stuff ... ... value=1000, ";

	printf("%s\n\n", betweenGetString("test=", " ", string));
	printf("%s\n\n", betweenGetString("value=", ",", string2));


	
}
