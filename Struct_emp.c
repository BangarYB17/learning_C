#include<stdio.h>

struct employee{
	int id;
	char name[20];
	char designation[20];
	float salary;
};

int main(){
	int n,i;
	printf("Enter Number of Employees:");
	scanf("%d",&n);
	
	struct employee e[n];
	
	for(i=0;i<n;i++){
		printf("Enter Details of Employee =%d \n",i+1);
		printf("id:");
		scanf("%d",&e[i].id);
		printf("Name:");
		scanf("%s",&e[i].name);
		printf("Designation:");
		scanf("%s",&e[i].designation);
		printf("Salary:");
		scanf("%f",&e[i].salary);
		printf("\n");
	}
	printf("\n -----Employee Records-----\n");
	for(i=0;i<n;i++){
		printf("Id : %d , Name : %s , Designation : %s , Salary : %2.f \n",e[i].id,e[i].name,e[i].designation,e[i].salary);
	}
	
	return 0;
}
