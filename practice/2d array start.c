#include<stdio.h>

int main(){
	
	int num[2][2],i,j ;
	int (*p)[2],*pint;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		scanf("%d",&num[i][j]);
	}	
	
	for(i=0;i<4;i++){
		p=num[i];
		pint=(int*) p;
		printf("\n");
		for(j=0;j<2;j++)
		printf("%d\t",*pint);
	}	

	
}


