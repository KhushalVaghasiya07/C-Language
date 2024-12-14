#include <stdio.h>


void cube(int *row, int *col, int array[*row][*col])
{
	for(int i=0; i<*row; i++)
	{
		for(int j=0; j<*col; j++)
		{
			int cube = array[i][j] * array[i][j] * array[i][j];
			printf("%d ", cube);
		}
		printf("\n");
	}
}

int main() 
{
    int row, col;

    printf("Enter your number of rows: ");
    scanf("%d", &row);
    printf("Enter your number of columns: ");
    scanf("%d", &col);
    printf("\n");

    int array[row][col];

    printf("Enter 2D elements in array:\n");
    for (int i = 0; i < row; i++) 
    {
        for (int j = 0; j < col; j++) 
        {
            printf("Element is[%d] [%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

	cube(&row,&col,array);
    
    return 0;
}