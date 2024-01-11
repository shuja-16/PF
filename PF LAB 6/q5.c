#include<stdio.h>	
int main(){

	int year;
	printf("Enter a year: ");
	scanf("%d",&year);
	if (year%100==0){
	
		if (year%400==0)
		printf("Its a leap year...\n");

		else
		printf("its not a leap year...\n");
		}
	
	else if(year%4==0)
		printf("Its a leap year...\n");

	else
	printf("its not a leap year...\n");	
}

