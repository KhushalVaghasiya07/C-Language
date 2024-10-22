#include<stdio.h>



main()
{
	int num;
	
	printf("Enter the any number of the array: ");
    scanf("%d", &num);
    
    int a[num];
    int i;
    
    printf("\n");
    printf("Now Enter any %d : \n",num);
    
	for(i=0;i<num;i++)
    {
    	scanf("%d",&a[i]);
	}
	
	printf("\n");
	printf("Your Negative Elements are : \n");
	
	for(i=0;i<num;i++)	
	{
		if(0>a[i])
		{
			printf("%d\n",a[i]);	
		}
						
	} 
}