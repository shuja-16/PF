#include<stdio.h>
main ()
{
	int a,b,c, disc;
	printf("enter value of a: ");
	scanf("%d",&a);
	printf("enter value of b: ");
	scanf("%d",&b);
	printf("enter value of c: ");
	scanf("%d",&c);
	
	disc= (b*b)-(4*a*c);
	printf("discriminant is = %d",disc);
}
