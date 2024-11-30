#include <stdio.h>
#include <string.h>

void main()
{
    char str[100];
    
    printf("Enter the string: ");
    scanf("%s",&str);
    
    for (int i = 0; i<strlen(str); i++)
    {
    	int feq = 1;
    	
        for(int j=i+1; j<strlen(str); j++)
        {
        	if(str[i]==str[j])
        	{
        		feq++;
        		str[j]='\0';
			}
		}
		
		if(str[i]!='\0')
		{
			printf("%c => %d\n",str[i], feq);
		}
			
    }
}