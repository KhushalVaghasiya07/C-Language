#include <stdio.h>

main() 
{
    char str[20], rev[20];
    int length = 0, Palindrome = 1;

    printf("Type Any String : ");
    scanf("%s",&str);

	int i;

    for (i = 0; str[i] != '\0'; i++) 
	{
        length++;
    }

    for (i = 0; i < length; i++) 
	{
        rev[i] = str[length - i - 1];
    }
    
    rev[length] = '\0'; 

    for (i = 0; i < length; i++)
	{
        if (str[i] != rev[i]) 
		{
            Palindrome = 0;
            break;
        }
    }

    if(Palindrome)
	{
        printf("Given String is a Palindrome");
    } 
	else 
	{
        printf("Given String does not a Palindrome\n");
    }
}