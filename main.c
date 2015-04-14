// Written by Brandon Holland
// Simple code to output the same elements within two arrays

#include <stdio.h>

int array_one [3] = {1, 2, 3};
int array_two [6] = {3, 4, 5, 6, 7, 2};

int main()
{
	int length_one = sizeof(array_one)/sizeof(array_one[0]);
	int length_two = sizeof(array_two)/sizeof(array_two[0]);

	printf("%i\n", length_one);
	printf("%i\n", length_two);

	printf("The arrays have the following same elements: \n");

	for(int a = 0; a < length_one; a++)
	{
		for(int b = 0; b < length_two; b++)
		{
			if(array_one[a] == array_two[b])
			{
				printf("%i ", array_one[a]);
			}
		}
	}

	return 0;
}