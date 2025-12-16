#include<stdio.h>

int main(){
	int ticket,idProof,lugguage;
	printf("Do you have a ticket(1-Yes , 0-No):");
	scanf("%d",&ticket);
	
	if(ticket ==1){
		printf("Do you have a ID Proof(1-Yes , 0-No):");
		scanf("%d",&idProof);
		if(idProof ==1){
			printf("Is lugguage within 15 kg?(1-Yes , 0-No):");
			scanf("%d",&lugguage);
			if(lugguage ==1){
				printf("Check In successfully");
			}else{
				printf("Extra lugguage charges apply");
			}	
		}else{
				printf("ID proof required");
		}
		
	}else{
			printf("No Ticket ,No Entry");
	}
	return 0;
}
