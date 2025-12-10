#include<stdio.h>

int main(){
	int num1,num2;
	// take user input
	printf("Enter first number(num1):\n");
	scanf("%d",&num1);
	
	printf("Enter second number(num2):\n");
	scanf("%d",&num2);
	
	printf("Addition :%d \n",num1 + num2);
	printf("Subtraction :%d \n",num1 - num2);
	printf("multiplication :%d \n",num1 * num2);
	printf("divison :%d \n",num1 / num2);
	printf("modulus :%d \n",num1 % num2);
	return 0;
}
