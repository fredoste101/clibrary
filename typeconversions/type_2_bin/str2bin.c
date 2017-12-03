#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "str2bin.h"

//Returns a string with the binary representation of the given argument
char * str_2_bin(char * string)
{
	int length = strlen(string);
	char * bin_str = (char *)malloc(sizeof(char) * length * 8 + sizeof(char));

	int i;
	for(i = 0; i < length; i++)
	{
		strcat(bin_str, char_2_bin(string[i]));
	}
	return bin_str;
}

//Returns a string with the binary representation of the given argument
char * char_2_bin(char c)
{
	int i = 0;
	char * bin_str = (char *)malloc(sizeof(char) * 8 + sizeof(char));

	for(i = 0; i < 8; i++)
	{
		bin_str[7-i] = c%2 + '0';
		c = c/2;
	}

	bin_str[8] = '\0';
	return bin_str;
}

