#include<stdio.h>

int main(){
	// Example 1
	int age;
	printf("Enter your Age : ");
	scanf("%d",&age);
	
	if (age >18){
		printf("You can vote for Election \n");
	}
	printf("Procees Complete \n");
	
	// Example 2
	int battery =15;
	if(battery>=15){
		printf("Low Battery,Please charge \n");
	}
	printf("Process Completed");
	return 0;
}
