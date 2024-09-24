#include<stdio.h>

main(){
	
	int A,B,C,triangle;
	
	printf("Enter the Value of A = ");
	scanf("%d",&A);
	printf("Enter the Value of B = ");
	scanf("%d",&B);
	
	C=A+B;
	
	triangle=180-C;
	
	printf("Triangle thrid angle is = %d",triangle);
}