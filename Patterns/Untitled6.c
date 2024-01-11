#include<stdio.h>
main(){
	int n,i,j,k,l;
	printf("rows ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=n-i;k++)
		{
			printf(" ");l++;
		} 
		for(j=1;j<=2*i-1;j++,l++)
		{
			if (l<=n-1)
			printf("%d",i+j);
			else
			printf("%d",j);
		}
		printf("\n");
	}
		
}







