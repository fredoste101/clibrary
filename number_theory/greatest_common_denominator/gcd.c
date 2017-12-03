#include <stdio.h>
int gcd(unsigned int a, unsigned int b)
{
	int temp = 0;
	while(b != 0)
	{
		printf("%d = %d * %d + %d\n", a, b, a / b, a%b);
		temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}
