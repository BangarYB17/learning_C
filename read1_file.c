// reading from file

#include<stdio.h>

int main(){
	FILE *fp;
	char str[200];
	fp = fopen("C:\\2612\\yogesh_write.txt","r");
	if(fp == NULL){
		printf("Error Opening File....\n");
		return 1;
	}
	printf("File content \n");
	while(fgets(str,sizeof(str),fp)!= NULL){
		printf("%s",str);
	}
	fclose(fp);
	return 0;
}
