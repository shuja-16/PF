#include <stdio.h>
main(){
int x,y,z;
printf("enter three value.. ");
scanf("%d %d %d",&x,&y,&z);
	if((x>y)&&(y>z))
		printf("first num %d is greater than second %d and third num %d is less than second %d",x,y,z,y);
	if((z>y)&&(z>x))
		printf("third num %d is greater than second %d and first num %d is less than second %d",z,y,x,y);
	else
		printf("second num %d is greater than first %d and third num %d",y,x,z);


}
