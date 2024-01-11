#include<stdio.h>
main(){
	int c,num,modnum;
	printf("Enter number: ");
	scanf("%d",&num);
	modnum=num % 2;
	c=(modnum==0?printf("Its even...\n"):printf("Its odd...\n"));
	
}
