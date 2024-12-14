#include <stdio.h>
#include <string.h>

void main()
{
    char inputString[30];
    
    printf("Enter any type ofstring : ");
    gets(inputString);
    
    int stringLength = 0;
    
    int *lengthPtr;
    
    lengthPtr = &stringLength;
    
    for(int index = 0; inputString[index] != '\0'; index++)
    {
        (*lengthPtr)++;
    }
    
    printf("String Length : %d", *lengthPtr);
}
