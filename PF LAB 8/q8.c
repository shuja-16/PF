#include<stdio.h>
main(){
	int a=1, i=1, j=1, rows=0;char choice;
	printf("Which option would you like:\n1.Numbers\n2.Asteriks(*)\n3.Alphabets\n");
	scanf("%c",&choice);
	printf("enter number of rows: ");
	scanf("%d",&rows);
	if(choice=='1'){ //number pattern
		for (i=1;i<=rows;i++){
			for(j=1;j<=i;j++){
			printf("%d",j);
		}
			printf("\n");
		}
	}
 	else if(choice=='2'){ //Asteriks pattern
		for(i=1;i<=rows;i++)
			{
			for(j=1;j<=i;j++){
				printf("*");
				}
			printf("\n");
		}
	}
 	else if(choice=='3'){ //alphabet pattern
		for(i=1;i<=rows;i++)
			{
			for(j=1,a=1;j<=i;j++){
				printf("%c",a+64);
				a++;}
				printf("\n");}
			}
}
