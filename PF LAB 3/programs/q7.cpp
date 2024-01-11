#include<stdio.h>
 
 
 main(){

	 int p,r,t; float I;
	 printf("enter principal amount: ");
	 scanf("%d",&p);
	 printf("enter rate: ");
	 scanf("%d",&r);
	 printf("enter time: ");
	 scanf("%d",&t);
	 
	 I=(p*r*t)/100;
	 printf("\nSimple interest is: %0.2f ", I);
	 
 }
 
