#include <math.h>
#include <string.h>

int char_2_int(char c);

int string_2_int(char * string)
{
	int digits = strlen(string) - 1;
	int return_value = 0;
	int negative = 0;
	int digitValue = 1;

	if(*string == '-')
	{
		negative = 1;
	}
	

	
	
	for(digits; digits >= negative; digits--)
	{
		return_value += char_2_int(string[digits]) * digitValue;
		digitValue *= 10;
	}

	if(negative)
	{
		return return_value * (-1);
	}
	else
	{
		return return_value;
	}
}

int char_2_int(char c)
{
	return (int)(c - '0');
}
