#include <stdio.h>
#include "str2bin.h"

int main(int argc, char * argv[])
{
	if(argc < 2 || argc > 3)
	{
		printf("\nUsage: str2bin string -> binary string\n");
		return 0;
	}
	
	printf("\nInput string: %s\n",argv[1]);

	printf("\nLets see: %s\n", char_2_bin(argv[1][0]));

	printf("\nLets se string: %s\n", str_2_bin(argv[1]));

}

