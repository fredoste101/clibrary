#include <stdio.h>
#include "bin_search.h"

int main()
{
	printf("\nDriver for bin_search\n");

	int searchedNum = 9;

	long long array[10] = {0,1,2,3,4,5,6,7,8,9};

	unsigned int index = (int)binarySearch(array, 10, searchedNum);

	printf("Found %d at: %d\n", searchedNum, index);

}
