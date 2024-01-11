#include<stdio.h>
main(){
int acc, amount, tot_int ,tot_amount, term ;
float rate, monthly_am ;
printf("Enter Accout number: ");
scanf("%d",&acc);
	printf("Enter Mortgage amount(in dollars): $ ");
	scanf("%d",&amount);
	printf("Enter Mortgage term(in years): ");
	scanf("%d",&term);
	printf("Enter interest rate: ");
	scanf("%f",&rate);
	if (acc>-1){
	
	tot_int=amount*rate*term;
	tot_amount=amount+tot_int;
	monthly_am=round((tot_amount/(term*12)));
	
	printf("Monthly payment amount is: $ %0.2f",monthly_am);

	}
	else
	printf("Invalid account number..."); 
} 
