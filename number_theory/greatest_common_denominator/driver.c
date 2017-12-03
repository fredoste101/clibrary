#include <stdio.h>
#include "gcd.h"

int main()
{
	printf("\nDriver for gcd\n");
	int a, b;

	a = 11;
	b = 7;
	printf("\ngcd(%d, %d) = %d\n", a, b, gcd(a, b));
	a = 25;
	b = 6;
	printf("\ngcd(%d, %d) = %d\n", a, b, gcd(a, b));

	a = 36;
	b = 12;
	printf("\ngcd(%d, %d) = %d\n", a, b, gcd(a, b));

	a = 2000;
	b = 300;
	printf("\ngcd(%d, %d) = %d\n", a, b, gcd(a, b));
	
}
