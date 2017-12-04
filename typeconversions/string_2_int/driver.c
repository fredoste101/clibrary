#include <stdio.h>
#include "string_2_int.h"

int main()
{	
	printf("\nDriver for string_2_int\n");

	char * num1 = "987";
	char * num2 = "-345";
	char * num3 = "0";

	printf("%s => %d\n", num1, string_2_int(num1));
	printf("%s => %d\n", num2, string_2_int(num2));
	printf("%s => %d\n", num3, string_2_int(num3));

	printf("\n\n");
}
