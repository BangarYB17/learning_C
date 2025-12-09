#include<stdio.h>

int main(){
	//integer types
	int i= 10;
	short int si = 5;
	long int li = 120007;
	unsigned int ui = 20;
	
	// character type
	char c = 'A';
	
	// floating points type
	float f = 3.14;
	double d = 3.1438745963;
	long double ld = 3.1342369857422424224244242;
	
	printf("---------------Integer Types-----------------\n");
	printf("int : value=%d,size = %zu byte\n",i,sizeof(i));
	printf("short int : value=%d,size = %zu byte\n",si,sizeof(si));
	printf("long int : value=%ld , size = %zu byte \n",li,sizeof(li));
	printf("unsigned int : value=%u , size = %zu byte\n",ui,sizeof(ui));
	
	printf("---------------character Types-----------------\n");
	printf("char : value=%c , size = %zu byte\n",c,sizeof(c));
	
	printf("---------------floating points Types-----------------\n");
	printf("float : value=%f , size =%zu byte\n",f,sizeof(f));
	printf("double : value=%lf,size = %zu byte\n",d,sizeof(d));
	printf("long double : value=%lf,size = %zu byte\n",ld,sizeof(ld));
	
	return 0;
}
