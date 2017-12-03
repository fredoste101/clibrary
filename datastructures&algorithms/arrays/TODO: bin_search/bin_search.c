int bin_search(unsigned long long low, unsigned long long high, unsigned long num, unsigned long long * list)
{
	//printf("\nbin_search: looking for: %lu, [%d, %d]\n", num, low, high);

	if(low > high)
	{
		return -1;
	}
	
	if(low == high)
	{
		return list[low] == num ? low : -1;
	}
	
	int middle = low + (high - low) / 2;

	if(list[middle] == (unsigned long)num)
	{
		return middle;
	}
	else if(list[middle] > (unsigned long) num)
	{
		return bin_search(low, middle - 1, num);
	}
	else
	{
		return bin_search(middle + 1, high, num);
	}

	
}
