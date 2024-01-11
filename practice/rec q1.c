#include<stdio.h>
#include<stdlib.h>

int rec(int n){
 int a;

	if (n==0)
	return n;

	else
	{
		a=n%10;
		n/=10;
	}
	return (a+rec(n));
}


int main(){
	int num;
	
	scanf("%d",&num);
	
	
	int f=	rec(num);
	printf("%d",f);
	
}
