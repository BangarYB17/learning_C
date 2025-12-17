#include<stdio.h>

int main(){
	int i,j;
	
	printf("Example 1 \n");
	for(i=1;i<=3;i++){
		for(j=1;j<=5;j++) {
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
	
	printf("Example 2 \n");
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
	
	printf("Example 3 \n");
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("Example 4 \n");
	for(i=1;i<=3;i++){
		for(j=1;j<=3;j++){
			printf("%d ",i*j);
		}
		printf("\n");
	}
	printf("\n");
	
	printf("Example 5 \n");
	for (i=5;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
	printf("Example 6 \n");
	for(i=1;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%d ",i);
		}printf("\n");
		
	}
return 0;
}
