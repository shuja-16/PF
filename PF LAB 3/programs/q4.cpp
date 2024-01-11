#include<stdio.h>

main(){
	float salary, tax, tax_rate;
	printf("Enter salary: Rs. ");
	scanf("%f", &salary);
	printf("Enter tax rate:\t");
	scanf("%f", &tax_rate); 
	
	tax = salary * (tax_rate/100);
	printf("\nTax is: %0.2f\n",tax);
	
	printf("\nSalary before tax: Rs. %0.2f\n",salary);
	salary = salary - tax;
	
	printf("\nSalary after tax is: Rs. %0.2f", salary);


}
