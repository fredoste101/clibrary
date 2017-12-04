#include <stdlib.h>
#include <math.h>

int num_digits(int num);
void fill_string(char * string, int num, int digits);
char int_2_char(int num);

char * int_2_string(int num)
{
	int digits;

	if(num == 0)
	{
		digits = 1;
	}
	else if(num < 0)
	{
		digits = num_digits((-1) * num) + 1;
	}
	else
	{
		digits = num_digits(num);
	}
	
	char * string = (char *)malloc(sizeof(char) * digits + 1 * sizeof(char));
	fill_string(string, num, digits);	

	return string;
}

int num_digits(int num)
{
	return (int)floor(log10(num)+1);
}

void fill_string(char * string, int num, int digits)
{
	int digit;
	int digitValue = 10;
	int rest = 0;
	int negative = 0;

	if(num < 0)
	{
		negative = 1;
		string[0] = '-';
		num *= (-1);
	}

	string[digits] = '\0';
	digits--;
	
	
	for(digits; digits >= negative; digits--)
	{
		rest = num % digitValue;
		string[digits] = int_2_char(rest / (digitValue / 10));
		digitValue *= 10;
		num -= rest;
	}
}

char int_2_char(int num)
{
	return (char) num + '0';
}

