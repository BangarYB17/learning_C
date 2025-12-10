#include<stdio.h>

int main(){
	int num;
	printf("Enter Number: \n");
	scanf("%d",&num);

	num +=5;
	printf("After num+= %d \n",num);
	num -=5;
	printf("After num-= %d \n",num);
	num *=5;
	printf("After num*= %d \n",num);
	num /=5;
	printf("After num/= %d \n",num);
	num %=5;
	printf("After num%= %d \n",num);
	
	
	return 0;
}
