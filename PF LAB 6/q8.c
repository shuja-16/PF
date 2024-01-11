#include<Stdio.h>
main(){
	int course; 
	char dept;
	printf("Which following school you want to select?\n");
	printf(" 1. school of Computer science.\n 2. School of business.\n 3. School of engineering.\n ");
	scanf("%d", &course);
	switch(course){
		case 1 : 
		printf("Select deptartment\n");
		printf(" 1.Dept. of Informatics\n");
		printf(" 2.Dept. of Machine learning\n");
fflush(stdin);
		scanf("%c",&dept);
			switch (dept){
				case'1':
				printf(" Course A\n Course B\n Course C\n Course D");break;
				case'2':
				printf(" Course E\n Course F\n Course G\n Course H\n Course I");break;
			default	:
			printf("Enter choice again...");}
		break;
		case 2 :
		printf("Select deptartment\n"); 
		printf(" 1.Dept. of commerce\n");
		printf(" 2.Dept of Purchasing\n");
fflush(stdin);
		scanf("%c",&dept);	
			switch (dept){
				case'1':
				printf(" Course X\n Course Y\n Course Z\n");break;
				case'2':
				printf(" Course M\n Course N\n Course O\n Course P\n");break;
			default	:
			printf("Enter choice again...");}
		break;			
		case 3 :
		printf("Select deptartment\n ");	
		printf(" 1.Dept. of mechanical engineering\n ");
		printf(" 2.Dept. of mechatronics engineering\n ");
fflush(stdin);	
		scanf("%c",&dept);
			switch (dept){
				case'1':
				printf(" Course R\n Course S\n");break;
				case'2':
				printf(" Course J\n Course K\n Course L\n");break;
			default	:
				printf("Enter choice again...");}
		break;	
	deafault:
	printf("Enter choice again...");
		
	
	
	
}
	
	
	
	
	
}
