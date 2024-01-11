#include<stdio.h>
main(){
	char operation;
	float x,y,ans;
 	
	printf("Enter the operation you want to use:\n");
	scanf("%c",&operation);
	printf("Enter two numbers:\n");
	scanf("%f %f",&x,&y);	
	switch(operation){
		case'+': 
			ans = x + y;
			break;
		case'-': 
			ans = x - y;
			break;
		case'*': 
			ans = x * y;
			break;
		case'/': 
			ans = x / y;
			break;
		default: printf("operator doesnt match");
	}
		printf("Result: %0.2f",ans);
}
	
