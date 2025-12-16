#include<stdio.h>

int main(){
	int restaurantopen,foodavailable,payment;
	printf("Is resturant open? (1-Yes , 0-No):");
	scanf("%d",&restaurantopen);
	
	if(restaurantopen ==1){
		printf("Is Your food available?(1-Yes , 0-No):");
		scanf("%d",&foodavailable);
		if(foodavailable ==1){
			printf("payment successful?(1-yes , 0-No):");
			scanf("%d",&payment);
			if(payment ==1){
				printf("Your order confirmed");
			}else{
				printf("Payment failed");
			}
		}else {
			printf("Food not availbale");
		}
	}else{
		printf("Restaurant is closed");
	}
	 printf("\nProcess completed");
	return 0;
}
