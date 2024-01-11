#include <stdio.h>
main(){
int side1 ,side2 ,side3;
printf("Enter side 1: ");//20
scanf("%d",&side1);
printf("Enter side 2: ");//10
scanf("%d",&side2);
printf("Enter side 3: ");//10
scanf ("%d",&side3);
if(side1==side2){
	if (side2==side3 && side1==side3)
	printf("the triangle is equilateral");}
else if (side1!=side2){
		if ((side1!=side3) || (side2!=side3))
		printf("the triange is I");
		else printf("the triange is S");
	}

}
