#include<stdio.h>

int func_recruit();

main(){
	func_recruit();	
}
int func_recruit(){
	int marks,exp;
	
	printf("Marks: ");
	scanf("%d",&marks);
	if (marks>=50){

		if (marks>=60)
		{
		printf("Experience: ");
		scanf("%d",&exp);
			if (marks<70 && exp>=1)
			printf("Assistant developer\n");
			else if (exp>=2)
			printf("Associate Developer\n");
		}
		else
		printf("Trainee Engineer\n");

	}
	else printf("Test not cleared...\n");
}

