// function with parameters and with return value
#include<stdio.h>

int areasquare(int length){
	return length*length;
}
int max(int a,int b){
	if(a>b){
		return a;
	}else {
		return b;
	}
}
int main(){
	int result = max(10,11);
	int area=areasquare(6);

	printf("Area of Square is:%d \n",area);
	printf("Maximum Number is:%d \n",result);
	return 0;
}
