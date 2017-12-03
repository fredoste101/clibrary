#include <stdlib.h>
#include <math.h>

#include "int_2_binary_string.h"

static int log_2(unsigned int num);

char * int_2_binary_string(unsigned int num)
{
	unsigned digits = log_2(num);

	char * bin_str = (char *)malloc(digits * sizeof(char) + sizeof(char));
	bin_str[digits+1] = '\0';

	int i;
	for(i = digits; i >= 0; i--)
	{
		bin_str[i] = (char)(num % 2) + '0';
		num /= 2;
	}
	return bin_str;
}

static int log_2(unsigned int num)
{
	return (int)floor(log(num) / log(2));
}
