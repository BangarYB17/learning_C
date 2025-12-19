#include<stdio.h>
// 1. function without parameter and without return.
void msg(){
	printf("Hello, Welcome to C Programming \n");
}
void printstar(){
	printf("\n********************************\n");
}
void todaymenu(){
	printf("1.Pizza\n");
	printf("2.Burger\n");
	printf("3.Sandwich \n");
}
void tomomenu(){
	printf("1.Ukdiche modak\n");
	printf("2.Fish \n");
	printf("3.Dosa \n");
}
int main(){
	printstar();
	msg();
	msg();
	printf("--------------------------------\n");
	msg();
	msg();
	printstar();
	todaymenu();
	printstar();
	tomomenu();
	return 0;
}
