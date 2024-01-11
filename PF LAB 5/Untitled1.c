#include<stdio.h>
main ()
{
	int bright;
	printf("Enter the brightness. ");
	scanf("%d",&bright);
	
	if(bright > 500 && bright<=1000)
		printf("\nexposed under the sunshine...\n");	
	 else if(bright > 100 && bright<=500)
		printf("\nlightning...\n");
	 else if(bright >=0 && bright<=100)
		printf("\nits evening...\n");
	 else
		printf("\nInvalid input\n");
	 
	
}
