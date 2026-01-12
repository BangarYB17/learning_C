#include<stdio.h>
#include<string.h>

int main(){
	// strlen  (string length)
	char name[]="Prathmesh abcd";
	printf("Length = %d\n",strlen(name));
	
	//str cpy  (string copy)
	char a[20]="Hello";
	char b[20];
	strcpy(b,a);
	printf("Copied string : %s",b);
	
	//strcat (string concatenation)
	char x[10]="Yogeshwar ";
	char y[10]="Bangar";
	strcat(x,y);
	printf("\n%s",x);
	
	//3string concatenation example
	char s[10]="Welcome ";
	char t[10]="To ";
	char u[10]="Pune";
	strcat(s,t);
	strcat(s,u);
	printf("\n%s",s);
	
	//strcmp (string comparision)
	char s1[10]="hello";
	char s2[10]="Hello";
	
//	if(strcmp(s1,s2)==0){
//		printf("\nString are Equal");
//	}else{
//		printf("\nString are not equal");
//	}

     // to avoid case sensitive
     if(strcasecmp(s1,s2)==0){
		printf("\nString are Equal");
	}else{
		printf("\nString are not equal");
	}
	
     // strupr (convert string into uppercase)
     
     char str[]="Hello its yogeshwar";
     strupr(str);
     printf("\n%s",str);
     
     // strlwr (convert string into lowercase)
     
     char str1[]="HELLO ITS YOGESHWAR";
     strlwr(str1);
     printf("\n%s",str1);
     
     //strrev (reverse string)
     char module[]="Programming";
     strrev(module);
     printf("\n%s",module);
     
     // (printf first and last character from string)
     char mname[]="Yogeshwar";
     int len = strlen(str);
     printf("\nFirst : %c \n",str[0]);
     printf("Last : %c \n",str[len-1]);
     
     // count string length without strlen
//     char country[]="india";
//     int i=0;
//     
//     while(country[i]!='\0'){
//     	i++;
//	 }printf("Length = %d",i);
	 
	 // count world 
//	 char continent[]="Australia is best continent";
//	 int i,count=1;
//	 
//	 for(i=0;continent[i]!='\0';i++){
//	 	if(continent[i]==' ')
//	 	count++;
//	 }
//	 printf("\nTotal worlds are: %d",count);
	 
	 // count banana
//	 char Fruit[]="Banana";
//	 int i;
//	 
//	 for(i=0;Fruit[i]!='\0';i++){
//	 	if(Fruit[i]=='a'){
//	 		Fruit[i]='@';
//		 }
//	 	
//	 }
//	 printf("%s",Fruit);
	
	// string palindrome
	char str3[20];
	char rev[20];
	printf("Enter string:");
	scanf("%s",str3);
	strcpy(rev,str3);
	strrev(rev);
	if(strcmp(str3,rev)==0)
		printf("String is palindrome");
	    else
		printf("String is not palindrome");
	
	
	 return 0;
     
     
}
