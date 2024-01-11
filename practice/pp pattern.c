#include<stdio.h>
#include<string.h>

int main(){
	char *p,a[10];
	int i,j,k=0;
//	p=(char*) malloc (10*sizeof(char));
	
	//for(i=10;i<=4;i++)
	gets(a);
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%5c",a[k]);
			k++;
			if(k==strlen(a))
			k=0;
		}
		printf("\n");
	}
	
	
}
