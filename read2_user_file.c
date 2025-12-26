 // read data from user input file
 
 #include<stdio.h>
 
 int main(){
 	FILE *fp;
 	char name[200];
 	int age;
 	float marks;
 	fp = fopen("C:\\2612\\user_input_fileop.txt","r");
 	
 	if(fp == NULL){
 		printf("Error Opening File... \n");
 		return 1;
	}
	fscanf(fp,"Name: %s \nAge: %d \nMarks: %f \n",name,&age,&marks);
	printf("Student Information Read From File Successfully \n");

    printf("Name : %s \n",name);
    printf("Age : %d \n",age);
    printf("Marks : %.2f \n",marks);
	fclose(fp);
	
 	return 0;
 }
