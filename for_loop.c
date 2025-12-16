#include<stdio.h>

int main(){
	int i,j;
	int sum;
	
	//print number 1 to 10
	for(i=1;i<=10;i++){
		printf("%d \n",i);
	}
	printf("\n");
    // multiplication of 5
    for(i=1;i<=10;i++){
    	printf("5 X %d = %d\n",i,5*i);
	}
	printf("\n");
	
	// reverse 10 to 0
	for (i=10;i>=0;i--) {
		printf("%d \n",i);
	}
	printf("\n");
	
	//skipping number 0 2 4 6 8 10
	for(i=0;i<=10;i+=2){
		printf("%d \n",i);
		
	}
	printf("\n");
	
	for(i=1,j=5;i<=5;i++,j--){
		printf("i=%d , j=%d\n",i,j);
	}
	printf("\n");
	//sum 1+2+3+4+5
	for(i=1;i<=5;i++){
		sum +=i;
	}
	printf("sum =%d",sum);
	return 0;
}
