#include<stdio.h>
#include"int_2_char.h"

int main(int argc, char * argv[])
{

	if(argc < 2)
	{
		printf("Usage: ./driver <int>");
		return 0;
	}
	
	printf("\n****************\n");
	printf("*    DRIVER    *\n");
	printf("*     FOR      *\n");
	printf("*  INT_2_CHAR  *\n");
	printf("****************\n");

	printf("\nNumber is: %c\n", int_2_char(argv[1][0] - '0'));
	

	return 0;
}
