#include<stdio.h>

int main(){
	int arr[8]={1,2,3,4,5,6,7,8};
	int even =0,odd =0;
	int i;
	
	for(i=0;i<8;i++){
		if(arr[i]%2==0){
			even++;
		}
		else{
			odd++;
		}
	}
	printf("Even Count:%d \n",even);
	printf("Odd count:%d",odd);
	return 0;
}
