//3. Write a C program that defines a function to reverse a 3 digit number.

#include <stdio.h>

int main() {
    int num, reversed = 0;

    
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);

    
    if (num <= 100 || num >= 999) 
	{
        printf("Please enter a valid 3-digit number.\n");
    }

    
    reversed += (num % 10) * 100;  
    num /= 10;  

    reversed += (num % 10) * 10;    
    num /= 10;  

    reversed += num;                

    
    printf("Reversed number: %d\n", reversed);

    return 0;
}
	