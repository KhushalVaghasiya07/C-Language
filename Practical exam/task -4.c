//4. Write a C program to find square of each elements of an 1D array using Pointer.

#include <stdio.h>

int main() {
    
    int arr[]={9,7,6,12,5,6};
    int *ptr = arr; // Pointer to the array

    printf("Squares of the elements:\n");
    for (int i = 0; i < arr[i]; i++) {
        printf("%d = %d\n", *(ptr + i), (*(ptr + i)) * (*(ptr + i)));
    }

    return 0;
}
