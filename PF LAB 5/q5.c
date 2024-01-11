#include<stdio.h>
main(){
	char ch;
	printf("Enter any character ");
	scanf("%c",&ch);
	if (ch>='a' && ch<='z')
	
		printf("Small Alphabet...");
	
	else if (ch>='A' && ch<='Z')
	
		printf("Large Alphabet...");
	
	else if (ch>='0' && ch<='9')
	
		printf("Its a Digit...");
		
	else
	
	printf("Special character...");
	
}
