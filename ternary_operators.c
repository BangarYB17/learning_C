#include<stdio.h>

int main(){
	int num1,num2,max;
	
	// take user input
	printf("enter first number (num1):");
	scanf("%d",&num1);
	
	printf("enter second number (num2):");
	scanf("%d",&num2);
	
	printf("-------*-----------*----------*---------- \n");
	max =(num1 > num2)? num1 : num2;
	printf("Maximum Number Is:%d",max);
	
	return 0;
}
