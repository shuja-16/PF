#include<stdio.h>
 main()
 {
   int number,modint;

   printf("Enter a number: ");
   scanf("%d",&number);
   
   	modint=number%3;

	if(modint==0)
     printf("\n%d is multiple of 3.\n",number);
	   
	else
	  printf("\n%d is not a multiple of 3.\n",number);
	   
}
