#include<stdio.h>

int main(){
	// Example 1
	int amount;
	printf("Enter Your Food Order Amount:");
	scanf("%d",&amount);
	
	if (amount >500){
		printf("Congratulations!, you get free delivery");
	}
	else{
		printf("Delivery charges will apply \n");
	}
	printf("---------------------------------------------------\n");
	
	// Example 2
	int balance,withdraw;
	printf("Enter Your Balance:");
	scanf("%d",&balance);
	printf("Enter Your Withdraw amount:");
	scanf("%d",&withdraw);
	
	if (balance >=withdraw){
		printf("your remaining amount is:%d \n",balance-withdraw);
		printf("process completed successfully");		
	}
	else {
		printf("insufficient balance");
	}
	return 0;
}
