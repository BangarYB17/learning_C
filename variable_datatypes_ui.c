#include<stdio.h>

int main(){
	int age ;
	float marks;
	char grade;
	char name[20];
	printf("Enter Your Age : ");
	scanf("%d",&age);
	printf("Enter Your Marks : ");
	scanf("%f",&marks);
	printf("Enter Your grade : ");
	scanf("%c",&grade);
	printf("Enter Your name : ");
	scanf("%s",name);
	
	// display output
	printf("---*---*---*---*----Student Details----*---*---*---*---*---\n");
	printf("age is: %d \n",age);
	printf("marks is: %.2f \n",marks);
	printf("grade is: %c \n",grade);
	printf("name is: %s \n",name);
	return 0;
}
