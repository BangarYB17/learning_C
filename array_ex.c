#include<stdio.h>

int main(){
	int marks[5] ={10,20,30,40,50};
	int i;
	printf("Array Elements");
	for (i=0;i<5;i++){
		printf("\n%d",marks[i]);
    }
	marks[2]=100;
	printf("\nUpdated Array Elements");
	for (i=0;i<5;i++){
		printf("\n%d",marks[i]);
    }
	return 0;
}
