#include <stdlib.h>

typedef struct s
{
	unsigned long size;
	unsigned long * list;
} prime_list;


static void ordered_fill_number_list(unsigned long * list, unsigned long list_size, unsigned long start_value);
static void remove_prime_multiples(unsigned long * prime_number_pointer, unsigned long * number_list, unsigned long list_size);
static unsigned long * next_prime_pointer_in_list(unsigned long * current_prime_pointer, unsigned long * number_list, unsigned long list_size);
static unsigned long sieve_number_list(unsigned long * number_list, unsigned long list_size);
static void fill_prime_list(unsigned long * prime_list, unsigned long number_of_primes, unsigned long * sieved_number_list, unsigned long number_list_size);
static void sieve_list(prime_list * sieved_list, unsigned long * number_list, unsigned long list_size);
prime_list * prime_number_list(unsigned long sieve_size);

prime_list * prime_number_list(unsigned long to_number)
{
	
	if(to_number < 2)
	{
		return NULL;
	}

	unsigned long list_size = to_number / 2 + to_number % 2;	//Skipping all multiples of 2 straight away. halfs list size.
	
	unsigned long * integer_list = (unsigned long *)malloc(sizeof(unsigned long) * list_size);
	prime_list * sieved_list = (prime_list *)malloc(sizeof(prime_list));
	

	if(integer_list == NULL || sieved_list == NULL)
	{	
		return NULL;
	}

	sieve_list(sieved_list, integer_list, list_size);

	free(integer_list);

	return sieved_list;

}

static void sieve_list(prime_list * sieved_list, unsigned long * number_list, unsigned long list_size)
{
	
	unsigned long number_of_primes;

	ordered_fill_number_list(number_list, list_size, 2);	//Fill the list with 2, 3, 4, 5, 6...
	
	number_of_primes = sieve_number_list(number_list, list_size);	//Sieve the list: 2, 3, 0, 5, 0, 7... Returns number of primes

	unsigned long * primes = (unsigned long *) malloc(sizeof(unsigned long) * number_of_primes);	//No error checking done here!

	if(primes == NULL)
	{
		sieved_list->size = 0;
		sieved_list->list = NULL;
		return;
	}
	
	fill_prime_list(primes, number_of_primes, number_list, list_size);	//Fill primes: 2, 3, 5, 7, 11...
	
	sieved_list->size = number_of_primes;
	sieved_list->list = primes;

}

static void ordered_fill_number_list(unsigned long * list, unsigned long list_size, unsigned long start_value)
{
	*list = start_value;
	list++;
	
	unsigned long i;
	
	for(i=1; i < list_size; i++)
	{
		*list = i*2+1;
		list++;
	}
}

static unsigned long sieve_number_list(unsigned long * number_list, unsigned long list_size)
{
	unsigned long * prime_pointer = number_list + 1; 	//Skip 2
	unsigned long number_of_primes = 1;					//Since skipping 2, we already have 1 prime_number.

	while(prime_pointer < &number_list[list_size])
	{
		number_of_primes++;
		
		remove_prime_multiples(prime_pointer, number_list, list_size);
		prime_pointer = next_prime_pointer_in_list(prime_pointer, number_list, list_size);
	}

	return number_of_primes;
}

static void remove_prime_multiples(unsigned long * prime_pointer, unsigned long * number_list, unsigned long list_size)
{
	unsigned long * current_number = prime_pointer + ((*prime_pointer) * (*prime_pointer) / 2) - *prime_pointer / 2;	//Start at prime^2 since all multiples before that, are 0.
	
	while(current_number < &number_list[list_size])
	{
		*current_number = 0;
		current_number += *prime_pointer;
	}
}

static unsigned long * next_prime_pointer_in_list(unsigned long * current_prime_pointer, unsigned long * number_list, unsigned long list_size)
{
	current_prime_pointer++;
		
	while(current_prime_pointer < &number_list[list_size] && *current_prime_pointer == 0)
	{
		current_prime_pointer++;	
	}
	return current_prime_pointer;
}

static void fill_prime_list(unsigned long * list_of_primes, unsigned long number_of_primes, unsigned long * sieved_number_list, unsigned long number_list_size)
{
	unsigned long i;
	unsigned long * prime_pointer = sieved_number_list;	//First prime is 2 at the start.

	for(i = 0; i < number_of_primes; i++)
	{
		*list_of_primes = *prime_pointer;
		list_of_primes++;
		
		prime_pointer = next_prime_pointer_in_list(prime_pointer, sieved_number_list, number_list_size);	//Get pointer to next prime in list
	
	}
}



