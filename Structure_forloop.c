#include<stdio.h>
struct student{
	int roll;
	char name[20];
	int marks;
	char grade;
};
int main(){
	int n,i;
	printf("Enter number of student: ");
	scanf("%d",&n);
	struct student s[n];
	
	for(i=0;i<n;i++){
		printf("\nEnter Details for student =%d \n",i+1);
	    printf("Enter Roll_no:");
	    scanf("%d",&s[i].roll);
	    printf("Enter Name:");
	    scanf("%s",&s[i].name);
	    printf("Enter Marks:");
	    scanf("%d",&s[i].marks);
	    printf("Enter Grade:");
	    scanf(" %c",&s[i].grade);
	
}
  printf("\n-----Student Records-----\n");
  for(i=0;i<n;i++){
  	printf("Roll No = %d,Name = %s , Marks = %d , Grade = %c",s[i].roll,s[i].name,s[i].marks,s[i].grade);
  }

	
	
	
	return 0;
}
