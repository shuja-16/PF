#include<stdio.h>
#include<string.h>
main()
{
	char func[10];
	char sin[3]="sin";
	char cos[3]="cos"; 
	char tan[4]="tan";
	char cot[3]="cot";
	char sec[3]="sec";
	char csc[3]="csc";
	int c;//c is coefficient
	printf("Enter in this format e.g sin,cos,tan\n");
	printf("Enter the trig function you want to differentiate\n");
    gets(func);
	printf("\nEnter the coeffecient of x: ");
	fflush(stdin);
	scanf("%d",&c);
	printf("%s",func);
	printf("\n");
	if(c!=0)
	printf("y=%s(%dx)\n",func,c);
	else
	printf("Not possible..."); 
		
	if(strcmp(func,sin)==0)
	{
	printf("dy/dx = %dcos(%dx)",c,c);
	}
    else if(strcmp(func,cos)==0)
	{
	printf("dy/dx = -%dsin(%dx)",c,c);
	}
	else if(strcmp(func,tan)==0)
	{
	printf("dy/dx = %dsec^2(%dx)",c,c);
	}
	else if(strcmp(func,cot)==0)
	{
	printf("dy/dx = -%dcsc^2(%dx)",c,c);
	}
	else if(strcmp(func,sec)==0)
	{
	printf("dy/dx = %dsec(%dx)tan(%dx)",c,c,c);
	}
	else if(strcmp(func,csc)==0)
	{
	printf("dy/dx = -%dcot(%dx)csc(%dx)",c,c,c);
	}
	else
	{
		printf("Invalid function...");
	}
	
}
