#include<stdio.h>

struct employee{
	int id_no;
	char name[20];
	char designation[20];
	float salary;
};

int main(){
	struct employee emp;
	printf("Enter Employee Id:");
	scanf("%d",&emp.id_no);
	printf("Enter Employee Name:");
	scanf("%s",&emp.name);
	printf("Enter Employee Designation:");
	scanf("%s",&emp.designation);
	printf("Enter Employee Salary:");
	scanf("%f",&emp.salary);
	
	printf("Details of employee\n");
	printf("Employee Id = %d \n",emp.id_no);
	printf("Employee Name = %s \n",emp.name);
	printf("Employee Designation = %s \n",emp.designation);
    printf("Employee Salary = %f \n",emp.salary);
	
	
	
	return 0;
}
