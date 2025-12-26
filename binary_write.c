// binary write


//binary write
#include<stdio.h>

int main(){
	FILE *fp;
	int numbers[]= {10,20,30,40,50};
	 fp = fopen("C:\\2612\\numbers1.bin","wb");
	 if (fp == NULL){
	 	printf("Error Opening File... \n");
	 	return 1;
	 }
	 fwrite(numbers,sizeof(int),5,fp);
	 fclose(fp);
	 printf("Binary Data written Successfully");
	return 0;
}
