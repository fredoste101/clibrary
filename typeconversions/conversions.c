#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "conversions.h"


void fill_string(char * string, int num, int digits);

/* TYPE 2 CHAR */

char int_2_char(int num)
{
	return (char) num + '0';
}


/* TYPE 2 STRING */

char * int_2_string(int num)
{
	int digits = num_digits(num);
	
	char * string = (char *)malloc(sizeof(char) * digits + 1 * sizeof(char));
	fill_string(string, num, digits);	

	return string;
}

void fill_string(char * string, int num, int digits)
{
	int digit;
	for(digits; digits > 0; digits--)
	{
		digit = num / pow(10, digits-1);
		*string = int_2_char(digit);
		num -= digit * pow(10, digits-1);
		string++;
	}
	*string = '\0';
}


/* TYPE 2 INT */

int num_digits(int num)
{
	return (int)floor(log10(num)+1);
}

int char_is_int(char c)
{
	return (c - '0') >= 0 && (c - '0') <= 9;
}

int string_is_int(char * string)
{
	int length = strlen(string);
	int pos = 0;

	if(string[pos] == '-' || string[pos] == '+')
	{
		pos++;
	}

	do
	{
		if(!char_is_int(string[pos]))
		{
			return 0;
		}
		pos++;

	}while(string[pos] != '\0');
	return 1;
}


	
int string_2_int(char * string)
{
	int j;
	int return_value = 0;
	int sign = 1;

	int length = strlen(string);
	int temp = length - 1;

	if(string[0] == '-')
	{
		sign = -1;
	}
	
	for(j = 0; j <= temp; j++)
	{
		return_value += char_2_int(string[j]) * (int)floor(pow(10, length-1));
		length--;
	}

	return return_value * sign;
}

int char_2_int(char c)
{
	int value = c - '0';
	if(value >= 0 && value <= 9)
	{
		return (int)(c - '0');
	}
	else
	{
		return 0;
	}
}


/* BINARY STRINGS */

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
