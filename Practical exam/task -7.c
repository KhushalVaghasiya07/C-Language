//7. Print a below pattern using nested for loop in C language:
//100
//8181
//64 64 64
//49 49 49 49
//36 36 36 36 36


#include <stdio.h>

main()
{
	int i,j;
	
	for(i=10;i>=6;i--)
	{
		for(j=i;j<=10;j++)
		{
			printf("%d ",i*i);	
		}	
		printf("\n");
	}	
}
