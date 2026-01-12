#include<stdio.h>

int main(){
//	int arr[]={20,30,40,60};
//	int n= sizeof(arr)/sizeof(arr[0]);
//	int sum=0;
//	int i;
//	
//	for(i=0;i<n;i++){
//		sum=sum+arr[i];
//	}
//	printf("sum of array is:%d",sum);

   int i,j;
   for(i=0;i<4;i++){
   	  for(j=0;j<=i;j++){
   	  	printf(" *");
		 }
		 printf("\n");
   }
    
return 0;
}
