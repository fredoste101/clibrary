#include "bin_search.h"

static unsigned long long bin_search(unsigned long long low, unsigned long long high, unsigned long long num, const long long * list);

unsigned long long binarySearch(const long long * list, long long listLen, long long num)
{
	return bin_search(0, listLen-1, num, list);
}

static unsigned long long bin_search(unsigned long long low, unsigned long long high, unsigned long long num, const long long * list)
{
	
	if(low > high)
	{
		return -1;
	}
	
	if(low == high)
	{
		return list[low] == num ? low : -1;
	}
	
	int middle = low + (high - low) / 2;

	if(list[middle] == num)
	{
		return middle;
	}
	else if(list[middle] > num)
	{
		return bin_search(low, middle - 1, num, list);
	}
	else
	{
		return bin_search(middle + 1, high, num, list);
	}

	
}
