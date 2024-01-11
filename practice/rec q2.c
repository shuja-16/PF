#include<stdio.h>
#include<stdlib.h>

int rec(int n){
int i;	
for(i=2;i<=n;i++){
	if (n%i==0)
	{
		printf("%d ",i);
		rec(n/i);
		break;		
	}
}
}


int main(){

	int m,f;
	scanf("%d",&m);
	
	rec(m);
	
}
