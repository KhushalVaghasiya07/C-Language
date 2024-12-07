#include <stdio.h>

void addition();
void substraction();
void multiplication();
void division();
void modulous();

void addition()
{
    int a, b;
    printf("Enter two numbers to addition: ");
    scanf("%d %d", &a, &b);		
    
    printf("addition: %d + %d = %d\n\n\n", a, b, a + b);
}

void substraction()
{
    int a, b;
    printf("Enter two numbers to substraction: ");
    scanf("%d %d", &a, &b);
    
    printf("substraction: %d - %d = %d\n", a, b, a - b);
}

void multiplication()
{
    int a, b;
    printf("Enter two numbers to multiply: ");
    scanf("%d %d", &a, &b);
    
    printf("multiply: %d * %d = %d\n", a, b, a * b);
}

void division()
{
    int a, b;
    printf("Enter two numbers to division: ");
    scanf("%d %d", &a, &b);
    
	if (b != 0)
	{
        printf("division: %d / %d = %.2f\n", a, b, (float)a / b);
    } 
	else 
	{
        printf("division by zero is not allowed!\n");
    }
}

void modulous()
{
	
    int a, b;
    printf("Enter two numbers to find modulous: ");
    scanf("%d %d", &a, &b);
    if (b != 0) 
	{
        printf("modulous: %d %% %d = %d\n", a, b, a % b);
    } 
	else
	{
        printf("Error: Division by zero is not allowed!\n");
    }
}

int main() 
{
    char choice;
    
    do{
        printf("1. addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. modulous (%%)\n");
        printf("0. Quit\n");
        printf("\n");
        
        printf("Enter your choice: ");
        scanf(" %c", &choice);  
        
        switch(choice)
		{
            case '1':
                addition();
                break;
                
            case '2':
                substraction();
                break;
                
            case '3':
                multiplication();
                break;
                
            case '4':
                division();
                break;
                
            case '5':
                modulous();
                break;
                
            case '0':
                printf("Exiting the program \n");
                break;
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while(choice != '0'); 

}
