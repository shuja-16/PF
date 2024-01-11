#include<Stdio.h>
main(){
	char choice, combo;
	printf("What kind of sandwich you want to order Chicken(c), beef(b), vegetarian(v)?\n");
	scanf("%c",&choice);
	switch(choice){
		case 'v':
			printf("What combinaion would you like?\n");
			printf("1. Tomato and Mozarella\n");
			printf("2. Eggplant and parmesan\n");
			printf("3. Cucumber and swiss cheese\n");
			fflush(stdin);
			scanf("%c",&combo);
			switch(combo){
				case '1':
					printf("Your order is Tomato and Mozarella veg sandwich");break;
				case '2':
					printf("Your order is Eggplant and parmesan Veg sandwich...");break;
				case '3':
					printf("Your order is Cucumber and swiss cheese Veg sandwich...");break;
			default:
				printf("Invalid input");}
		break;
	case 'c': printf("You've ordered a chicken sandwich...");break;
	case 'b': printf("You've ordered a beef sandwich");break;
	default: printf("Invalid input");
	}	
}
