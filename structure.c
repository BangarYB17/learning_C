#include<stdio.h>
/*structure is a user defined data type -allows you to store multiple variable of
 different datatypes under one name.
 
 syntax :
 struct structure_name{
      data_type member 1;
	  data_type member 2;
	  data_type member 3;
	  data_type member 4;
}
	  */
 
struct student{
	int roll;
	char grade;
	float marks;
};
int main(){
	struct student s1;
	s1.roll=101;
	s1.marks=56.78;
	s1.grade='B';
	
	struct student s2;
	s2.roll=102;
	s2.marks=86.78;
	s2.grade='A';
	
	printf("---*---*---*---*--- Student s1 Details ---*---*---*---*---\n");
	printf("Roll:%d \n",s1.roll);
	printf("Marks:%f \n",s1.marks);
	printf("Grade:%c \n",s1.grade);
	
	printf("---*---*---*---*--- Student s1 Details ---*---*---*---*---\n");
	printf("Roll:%d \n",s2.roll);
	printf("Marks:%f \n",s2.marks);
	printf("Grade:%c \n",s2.grade);
	
	return 0;
}
