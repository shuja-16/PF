#include<stdio.h>  
main()    
{    
 int i,factorial=1,number;   
	do{ 
	 	printf("Enter a non negative number: ");    
	 	scanf("%d",&number); 
 		if(number<0)
			printf("\nNon negative number is required. Please enter again.\n\n");
		
		else if(number==0)
			printf("\nFactorial of 0 is: 1\n");
		
		else{
		for(i=1;i<=number;i++){    
			factorial=factorial*i;} 
		}
} 	while (number<0);
	printf("\nFactorial of %d is: %d\n",number,factorial);
}
