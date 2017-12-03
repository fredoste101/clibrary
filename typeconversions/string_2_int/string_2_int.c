#include <math.h>
#include <string.h>

int char_2_int(char c);

int string_2_int(char * string)
{
	int j;
	int return_value = 0;

	int length = strlen(string);
	int temp = length - 1;
	
	for(j = 0; j <= temp; j++)
	{
		return_value += char_2_int(string[j]) * (int)floor(pow(10, length-1));
		length--;
	}

	return return_value;
}

int char_2_int(char c)
{
	return (int)(c - '0');
}
