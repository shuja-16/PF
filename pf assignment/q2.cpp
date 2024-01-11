#include<stdio.h>
main(){
	int i=1,age,N;char area;
	printf("enter number of persons: ");
	scanf("%d",&N);
	while(i<=N){
		printf("Enter area: ");
		fflush(stdin);
		scanf("%c",&area);
		printf("enter age: ");
		fflush(stdin);
		scanf("%d",&age);
		if ((age>=18) && (area=='u')) 
		printf("Eligible for the vaccine. Kindly proceed for the vaccination.\n\n");
		else if ((age<18) && (area=='r'))
		printf("Not Eligible for the vaccine. Kindly wait for the vaccination.\n\n");
		else 
		printf("invalid input\n\n");
		i++;
	}
	
}
