#include<stdio.h>

int main(){
	int choice;
	
	do{
		printf("\n 1.Hello \n 2.Bye \n 3.Exit \n --Enter your choice:");
		scanf("%d",&choice);
		if(choice==1)
		{
			printf("Hello \n");
		}else if(choice==2){
			printf("Bye \n");
		}
	}while(choice !=3);
	return 0;
}
