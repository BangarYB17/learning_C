#include<stdio.h>

int main(){
	int arr[5]={5,10,20,30,35};
	int i;
	printf("Reverse Array\n");
	
	for(i=4;i>=0;i--){
		printf("%d ",arr[i]);
	}
	
	int arr2[5];
	for(i=0;i<5;i++){
	     arr2[i]=arr[i];
	}
	printf("\nCopied Array:");
	 for(i=0;i<5;i++){
	 	printf("%d ",arr2[i]);
	 }
	return 0;
}
