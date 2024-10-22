#include<stdio.h>

main()

{
	
	int row, col;
	
	printf("Enter the array's row size : ");
	scanf("%d",&row);
	printf("Enter the array's Column size : ");
	scanf("%d",&col);
	
	printf("\n\n");
	
	int i,j;
	int a[row][col];
	
	printf("Enter array's elements : ");
	printf("\n\n");
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);	
		}
	}
	
	int large;
		
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(a[i][j] > large)
			{
				large = a[i][j];	
			}	
		}
	}
	
	printf("\n");
	printf("Largest Number from 2d Array is : %d",large);
}