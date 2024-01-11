#include<stdio.h>
int main(){
	char coffee,size,response;
	printf("What type of coffee you want?\n");
	printf("White(W) \t Black(B)\n");
	scanf("%c",&coffee);
fflush(stdin);
	printf("Choose your cup size large(l) or small(s)\n");
	scanf("%c",&size);
fflush(stdin);
	printf("Is your coffee manual (y/n)?\n");
	scanf("%c",&response);
	if(response=='y'){
	switch (coffee){
		case 'W':
			switch(size){
				case 's':
				printf("\nPut water \t 15 min\n");
				printf("Sugar \t\t 15 min\n");
				printf("Mix well \t 20 min\n");
				printf("Add coffee \t 2 min\n");
				printf("Add milk \t 4 min\n");
				printf("Mix well \t 20 min\n");break;
				case 'l':
				printf("\nPut water \t 22.5 min\n");
				printf("Sugar \t\t 22.5 min\n");
				printf("Mix well \t 30 min\n");
				printf("Add coffee \t 3 min\n");
				printf("Add milk \t 6 min\n");
				printf("Mix well \t 30 min\n");break;
			default:printf("invalid input...");	
			}
		break;	
		case 'B':
			switch(size){
				case 's':
				printf("\nPut water \t 20 min\n");
				printf("Sugar \t\t 20 min\n");
				printf("Mix well \t 25 min\n");
				printf("Add coffee \t 15 min\n");
				printf("Mix well \t 25 min\n");break;
				case 'l':
				printf("\nPut water \t 30 min\n");
				printf("Sugar \t\t 30 min\n");
				printf("Mix well \t 37.5 min\n");
				printf("Add coffee \t 22.5 min\n");
				printf("Mix well \t 45 min\n");break;
			default:printf("invalid input...");	
		}
		break;
	default :printf("invalid input...");}
	}
else if (response=='n')
	printf("Your order is placed and will be served automatically...");

}

