#include<stdio.h>

union Data{
	int i;
	float f;
	char c;
	
};
int main(){
	union Data d;
	d.i=10;
	printf("Integer = %d",d.i);
	d.f=40.10;
	printf("\nfloat = %f",d.f);
	d.c='dfegdbg';
	printf("\nchar = %s",d.c);
	return 0;
}
