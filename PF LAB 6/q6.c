#include<stdio.h>
main(){
	int side1,side2,side3;
	printf("Enter first side: ");
	scanf("%d",&side1);
	printf("Enter second side: ");
	scanf("%d",&side2);
	printf("Enter third side: ");
	scanf("%d",&side3);
	
	if((side1==side2) || (side1==side3) || (side2==side3)){
		if ((side1==side2) && (side1==side3) && (side2==side3))
		printf("Equilateral Triangle...");
		else
		printf("Isosceles triangle...");
		}
	else if ((side1!=side2) && (side1!=side3) && (side2!=side3))
		printf("Scalene triangle...");
	}
