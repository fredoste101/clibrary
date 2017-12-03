#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include "rc4.h"

//Första argument är nyckel och andra argument är text som ska krypteras/dekrypteras
int main(int argc, char * argv[])
{
	unsigned char * key;
	unsigned int keylen;
	unsigned char * input;
	unsigned int input_len = 0;

	unsigned int i;

	printf("\nThis is the driver for the rc4 stream cipher\n\n");


	keylen = strlen(argv[1]);
	key = (unsigned char *)malloc(keylen);
	for(i = 0; i < keylen; i++)
	{
		key[i] = argv[1][i];
	}
	
	input_len = strlen(argv[2]);
	input = (unsigned char *)malloc(input_len);
	for(i = 0; i < input_len; i++)
	{
		input[i] = argv[2][i];
	}

	printf("key=");
	for(i = 0; i < keylen; i++)
	{
		printf("%c", key[i]);
	}
	printf("\n");
	
	
	
	printf("plaintext=");
	for(i=0; i<4; i++)
	{
		printf("%c", input[i]);
	}
	printf("\n");
	
	printf("cipher=");
	
	rc4_init(key, keylen);
	for(i = 0; i < input_len; i++)
	{
		printf("%c", (char)rc4_byte(input[i]));
	}

	printf("\n\n");

}
