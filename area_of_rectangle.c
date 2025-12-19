#include<stdio.h>


void areaofrectangle(float length,float width){
	printf("Area of Rectangle:%f",length * width);
}
int main(){
    float length,width;
    printf("Enter Length:");
    scanf("%f",&length);
    printf("Enter Breadth:");
    scanf("%f",&width);
    
    areaofrectangle(length,width);
	return 0;
}
