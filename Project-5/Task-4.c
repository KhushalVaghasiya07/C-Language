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
	
	//Sum of Row elements[
	
	int n;
	printf("\n");
	printf("Enter Row number : ");
	scanf("%d",&n);
	printf("Elements of Row : ");
	int sum=0;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			if(n==i)
			{
				printf("%d ",a[i][j]);
				sum+=a[i][j];
			}	
			
		}
	}
	
	printf("\n");
	printf("The Sum of Row : %d",sum);
	printf("\n\n");
	
	//Sum of column elements
	printf("Enter Column number : ");
	scanf("%d",&n);
	printf("Elements of Column : ");
	
	sum=0;
	
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
		
			if(n==j)
			{
				printf("%d ",a[i][j]);
				sum+=a[i][j];
			}	
		}
	}
	
	printf("\n");
	printf("The Sum of Column : %d",sum);
}