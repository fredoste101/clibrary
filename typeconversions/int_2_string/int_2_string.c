#include <stdlib.h>
#include <math.h>

int num_digits(int num);
void fill_string(char * string, int num, int digits);
char int_2_char(int num);

char * int_2_string(int num)
{
	int digits = num_digits(num);

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
	for(digits; digits > 0; digits--)
	{
		digit = num / pow(10, digits-1);
		*string = int_2_char(digit);
		num -= digit * pow(10, digits-1);
		string++;
	}
	*string = '\0';
}

char int_2_char(int num)
{
	return (char) num + '0';
}

