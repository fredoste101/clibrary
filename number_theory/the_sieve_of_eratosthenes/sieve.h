#pragma once
//SIEVE OF ERATOSTHENES

//The only need for this instead of pure list is that the caller needs to know the size of the returned list.
//This cannot be calculated pre calling, since prime number are quite a treat especial...

typedef struct s
{
	unsigned long long size;
	unsigned long long * list;
} prime_list;

prime_list * prime_number_list(unsigned long long to_number);
