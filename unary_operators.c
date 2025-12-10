#include<stdio.h>

int main(){
	int num;
	printf("Enter Number:");
	scanf("%d",&num); //20
	
	printf("Pre Increment = %d \n",++num); //21
	printf("Post Increment = %d \n",num++); //21
	printf("after post increment = %d \n",num); //22
	printf("---------------------------------- \n");
	printf("Pre decrement = %d \n",--num); //21
	printf("Post decrement = %d \n",num--); //21
	printf("after post decrement = %d \n",num); //20
	return 0;
}
