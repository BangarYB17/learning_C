// user input file oerations.

#include<stdio.h>

int main(){
	FILE *fp;
	char name[20];
	int age;
	float marks;
	
	fp = fopen("C:\\2612\\User_input_fileop.txt","a");
	if(fp == NULL){
		printf("Error Opening File... \n");
		return 1;
	}
	printf("Enter Student Name:");
	scanf("%s", name);
	
	printf("Enter Student Age:");
	scanf("%d",&age);
	
	printf("Enter Student Marks:");
	scanf("%f",&marks);
	
	fprintf(fp,"Name: %s \nAge: %d \nMarks: %.2f \n",name,age,marks);
	
    fclose(fp);
    printf("Data Written Successfully in C:\\2612\\User_input_fileop.txt");
	
	return 0;
}
