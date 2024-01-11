#include<stdio.h>
main(){
		int num, age, dig, sum, modsum, code; char gender;
	printf("Enter 4 digit number: ");
	scanf("%d",&num);
	printf("enter age: ");
	scanf("%d",&age);
	printf("If male type '1' and if female type '0': ");
fflush(stdin);
	scanf("%c",&gender);
	switch(gender){
		case '0' : num = num + 0 ;break;
		case '1' : num =num + 1 ;break;
		default: printf("invalid input");
	}
	num = num + age;
	while (num>0){
		dig=num % 10;
		num/=10;
		sum = sum + dig;
	}
	modsum = sum % 5;
	printf("Enter verification code: ");
	scanf("%d",&code);
	if(code==modsum)
	printf("correct");
	else
	 printf("incorrect");
}
