#include<stdio.h>
#include<string.h>
main(){
	char name[30]; int length,i;
	printf("Enter name: ");
	scanf("%s",&name);
	length=strlen(name);
	
	printf("\nAfter reversing: ");
	for(i=length;i>=0;i--){
		printf("%c",name[i]);	
	}
	
}
