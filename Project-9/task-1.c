#include <stdio.h>

int main() 
{
    FILE *evenFile, *oddFile;
    int i;

    evenFile = fopen("even_numbers.txt", "w");
    if (evenFile == NULL)
	{
        printf("Error opening even_numbers.txt for writing.\n");
        return 1;
    }

    oddFile = fopen("odd_numbers.txt", "w");
    if (oddFile == NULL)
	{
        printf("Error opening odd_numbers.txt for writing.\n");
        fclose(evenFile);
        return 1;
    }

    for (i = 50; i <= 70; i++) 
	{
        if (i % 2 == 0) 
		{
            fprintf(evenFile, "%d\n", i);
        } else 
		{
            fprintf(oddFile, "%d\n", i);
        }
    }

    fclose(evenFile);
    fclose(oddFile);

    printf("Even numbers written to even_numbers.txt.\n");
    printf("Odd numbers written to odd_numbers.txt.\n");

    return 0;
}