//Writting to file

#include<stdio.h>

int main(){
	FILE *fp;
	fp = fopen("C:\\2612\\yogesh_write.txt","w");
	if(fp == NULL){
		printf("Error opening file ....\n");
		return 1;
	}
	fprintf(fp,"Hello,Its file Handling \n");
	fprintf(fp,"Hello,Its file handling 2nd line \n");
	fclose(fp);
	printf("Data Written Successfully ");
	return 0;
}
