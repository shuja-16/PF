#include<stdio.h>
main(){
	int response,num,digit; char encrypt;
	int length,decrypt,i,pos=1; char letter;
	printf("Select one of the following:\n1. Encrypt\n2. Decrypt\n");
	scanf("%d",&response);
	switch(response){
		case 1: 
			printf("Enter number: ");
			scanf("%d",&num);
			while(num!=0){
				digit=num%10;
				
	/* As ASCII value of A is 65 so addding 65 to
	 the digit will lead us to alphabets*/
			
				encrypt=digit+65;
				printf("%c",encrypt);
				num/=10;}
		break;
		
		case 2: 
			printf("Enter Length: ");
			scanf("%d",&length);
			for (i=1;i<=length;i++){
			printf("Enter Letters: ");
			scanf(" %c",&letter);
			decrypt += (letter-65)*pos;
			pos *= 10;
		}
			printf("Decrypted message: ");
			printf("%d",decrypt);break;default: printf("Invalid choice...") ;
	}
}

