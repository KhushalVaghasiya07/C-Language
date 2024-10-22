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
	
	printf("\n");
	
	printf("The transpose matrix of an array : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d ",a[j][i]);
		}
		printf("\n");
	}
	
	
}