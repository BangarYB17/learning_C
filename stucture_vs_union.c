#include<stdio.h>

struct employees{
	int id_no;
	char name[10];
	char designation[10];
	int salary;
	
};
union employeeu{
	int id_no;
	char name[10];
	char designation[12];
	int salary;
	
};
int main(){
	struct employees e1;
	printf("Size of struct = %d",sizeof(e1));
	union employeeu u1;
	printf(" , Size of union = %d",sizeof(u1));
	return 0;
}
