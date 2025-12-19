#include<stdio.h>
#define pi 3.146

float areaCircle(){
	float radius =7;
	return pi*radius*radius;
}
int main(){
	printf("Area of Circle = %.2f \n",areaCircle());
	return 0;
}
