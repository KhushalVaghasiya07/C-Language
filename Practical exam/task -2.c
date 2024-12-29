//2. Create a C program to find the smallest element in an 1D array.
	
#include <stdio.h>

main() {
    
	int minimum, i;

	int arr[20]={56,87,25,68,5,4,97};

    minimum = arr[0];

    for (i = 1; i < arr[i]; i++) 
	{
        if (arr[i] < minimum) 
		{
            minimum = arr[i];
        }
    }

    printf("The smallest element is: %d", minimum);

    
}
