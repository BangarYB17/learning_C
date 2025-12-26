//Appending to a file

#include<stdio.h>

int main(){
	FILE *fp;
	fp = fopen("C:\\2612\\yogesh_write.txt","a");
	if(fp == NULL){
		printf("Error Opening File...... \n");
		return 1;
	}
	fprintf(fp,"We learning c programming \n");
	fprintf(fp,"Today is the last day of our learning \n");
	fprintf(fp,"From monday new batch of web development will  be starting ");
	
	fclose(fp);
	printf("Data appended successfully");
	return 0;
}
