#include<stdio.h>

int main(){
	int marks[5];
	int i;
	printf("Enter 5 stduents marks :\n");
	for(i=0;i<5;i++){
		scanf("%d",&marks[i]);
	}
	printf("\n---------------Student Marks---------------\n");
	for(i=0;i<5;i++){
		printf("marks[%d]= %d \n",i,marks[i]);
	}
	return 0;
}


