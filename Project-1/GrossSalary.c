#include<stdio.h>

main(){
	
	int GS,HRA,TA,DA,BS;
	
	printf("Enter Your Base Salary = ");
	scanf("%d",&BS);
	printf("Enter HRA percentage = ");
	scanf("%d",&HRA);
	printf("Enter TA percantage = ");
	scanf("%d",&TA);
	printf("Enter DA percantage = ");
	scanf("%d",&DA);
	
	HRA=BS*HRA/100;
	TA=BS*TA/100;	
	DA=BS*DA/100;
	
	GS=BS+HRA+TA+DA;
	
	printf("Your Gross salary is = %d",GS);

}