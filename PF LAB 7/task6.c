#include<stdio.h>
main(){
	int x, year,year5,money=200000;
	//scanf("%d",&year);
	year5 = year+5; 
	for (scanf("%d",&year);year<=year5;year++){
		if(year%2==0)
			money=money-25563;
		else
			money=money-(25563+12580);
	}
	printf("Money left: %d\n",money);
	if (money>=100000)
		printf("Ali has enough money...\n");
	else 
		printf("Not enough money...\n");
	
	
}
