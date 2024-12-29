// 1. Create a C ro ram to check if a number is entered b the user is a orositive or consonant usin a switch statement.

#include <stdio.h>

int main() {
    char ch;

    printf("Enter a single character: ");
    scanf(" %c", &ch);
    
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) 
	{
        switch (ch) 
		{
            
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("'%c' is a vowel.\n", ch);
                break;

            default:
                printf("'%c' is a consonant.\n", ch);
        }
    }
	
	
	else {
        printf("'%c' is not a valid alphabet character.\n", ch);
    }

    return 0;
}
