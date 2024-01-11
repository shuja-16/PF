#include<stdio.h>
#include<string.h>

void encrypt(char str[]);

main(){
printf("Syed Muhammad Shuja Ur Rahman\n22K-4456\n\n");	
	
	char name[15],id[8],sec[2];
fflush(stdin);
	printf("enter name: ");
	scanf("%s",&name);
fflush(stdin);
	printf("enter ID: ");
	scanf("%s",&id);
	printf("Section: ");
	scanf("%s",&sec);	
	
	int x,i; char str[50];
	
fflush(stdin);
	printf("Enter any sentence: ");
	gets(str);
	

char newStr[20][20];
  int  letter=0; int words=0;
  
   for(i=0;i<=(strlen(str));i++){
   	
		if(str[i]==' ' || str[i]=='\0'){
			newStr[words][letter]='\0';
			words++;
			letter=0;
		}
		else{
			newStr[words][letter]=str[i];
			letter++;
		}
	}
         
}
