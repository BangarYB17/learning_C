#include<stdio.h>

int main(){
	char fullname[20];
	
//	printf("Enter Your Name:");
//	scanf("%s",name);
//	
//	printf("Your Name is = %s",name);
    printf("Enter Your Full Name:");
    fgets(fullname,sizeof(fullname),stdin);
    
    printf("Your Full Name is: %s",fullname);
    
	return 0;
}
