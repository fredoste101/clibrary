#include <stdio.h>
#include "sieve.h"



int main()
{
	printf("****************\n");
	printf("*  Driver For  *\n");
	printf("* The Sieve of *\n");
	printf("* Eratosthenes *\n");
	printf("****************\n");


	prime_list * test;

	test = prime_number_list(100);

	printf("\nSize of created sieve: %llu\n", test->size);

	int i = 0;

	for(i < 0; i < test->size; i++)
	{
		printf(" %llu \n", test->list[i]);
	}

	printf("\n\n");
}
