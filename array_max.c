#include<stdio.h>

int main(){
	int arr[5]={34,12,67,21,12};
	int max=arr[0];
	int min=arr[0];
	int i;
	
	for(i=1;i<5;i++){
	
		if(arr[i]>max){
			max=arr[i];
		}
	}printf("maximum number is:%d\n",max);
	for(i=1;i<5;i++){
		if(arr[i]<min){
			min=arr[i];
		}
	}printf("minimum number is:%d",min);
	
	
	return 0;
}
