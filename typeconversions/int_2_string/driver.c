#include <stdio.h>
#include <string.h>
#include "int_2_string.h"

int main()
{
	printf("\n****************\n");
	printf("*    DRIVER    *\n");
	printf("*     FOR      *\n");
	printf("* INT_2_STRING *\n");
	printf("****************\n");

	char * string1 = int_2_string(453554);
	char * string2 = int_2_string(0);
	char * string3 = int_2_string(-23);

	printf("\nNumber is: |%s| length is: %lu\n", string1, strlen(string1));
	printf("\nNumber is: |%s| length is: %lu\n", string2, strlen(string2));
	printf("\nNumber is: |%s| length is: %lu\n", string3, strlen(string3));

	return 0;
}
