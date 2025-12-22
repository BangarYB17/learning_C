#include<stdio.h>

int main(){
	int arr[2][3]={{1,2,3},{4,5,6}};
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			printf("%d ",arr[i][j]);
		}printf("\n");
	}
	
	int array[2][2];
	printf("Enter 4 Numbers: \n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",&array[i][j]);
		}
		
	}
	printf("Your Enter Elements are:\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d ",array[i][j]);
		}
		printf("\n");
		
	}
	return 0;
}
