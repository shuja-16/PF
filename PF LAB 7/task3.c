#include<stdio.h>
main(){
int age, toys, even_bday=0, i, money, toy_money, sum, WashMach=10000;
printf("Enter age of Sara: ");
scanf("%d",&age);	

	for(i=1;i<=age;i++){
	if (i%2==0){
		money+=100+((even_bday*200)-30);
		even_bday++;
	}
	else {
		toys++;
		toy_money=toys*130;
		}
	sum=toy_money + money;
		}

printf("Price of washing machine: %d\nMoney she saved over the years: %d\n",WashMach,sum);

if (sum>=WashMach)
	printf("Sufficient money to buy Washing Machine...\n");
else
	printf("Not enough money to buy Washing Machine...\n");
}

