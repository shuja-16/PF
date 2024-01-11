#include<stdio.h>
void swap(){
	int temp;	int a ,b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	printf("Before swap:\na=%d b=%d\n",a,b);
	temp=a;
	a=b;
	b=temp;
	printf("After swapping:\na=%d b=%d\n",a,b);
}
main(){
	swap();
}