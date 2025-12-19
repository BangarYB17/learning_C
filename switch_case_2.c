// menu driven program
#include<stdio.h>

int main(){
	int a,b,choice;
	char cont;
	
	do{
		printf("-----------------Calculator Menu-------------------\n");
		printf("1.Addition(+) \n");
		printf("2.Subtraction(-) \n");
		printf("3.Multiplication(*) \n");
		printf("4.Division(/) \n");
		printf("0.Exit \n");
		
		printf("Enter Your Choice:");
		scanf("%d",&choice);
		
		if (choice != 0 && choice <=4){
			printf("Enter First Number:");
			scanf("%d",&a);
			printf("Enter Second Number:");
			scanf("%d",&b);
		}
		switch(choice){
			case 1 : printf("Sum =%d \n",a+b);
			        break;
			case 2 : printf("Sub =%d \n",a-b);
			        break;
			case 3 : printf("Multiplication =%d \n",a*b);
			        break;
			case 4 : printf("Division =%d \n",a/b);
			        break;
			case 0 : printf("Calculator Exiting.....bye bye");
			        break;
			default : printf("Invalid Choice \n");
		}
		if(choice !=0){
			printf("Do You Want to perform another operation(Y/N): ");
			scanf(" %c",&cont);
		}else{
			cont ='n';
		}
	}while(cont == 'Y' || cont == 'y');
	
	return 0;
}
