#include<stdio.h>

int main(){
	int arr[5]={5,10,20,30,35};
	int sum = 0;
	int i;
	int length =sizeof(arr)/sizeof(arr[0]);
	
	for(i=0;i<length;i++){
		sum +=arr[i];
	}
	printf("sum is :%d",sum);
	return 0;
}
