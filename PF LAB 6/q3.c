#include<stdio.h>
main(){
	int marks;
	printf("Enter marks here:\n");
	scanf("%d",&marks);
	if (marks>=80){
		if (marks>=90)
		printf("Grade is A");
		if (marks>=80 && marks<90)
		printf("Grade is B");
	}
	else
	printf("Grade is C");
}
