#include<stdio.h>
main(){
	int x, r,a=9648;
	r=a%10;
	while(a>1)
	{
		a/=10;r=a%10;
		if (r>0) x=r;
	}
	printf("%d",x);
}
