#include<stdio.h>
main(){
	int n,i,j,k;
	printf("rows ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(k=1;k<=n-i;k++)
		printf(" ");
		for(j=1;j<=i;j++){
		printf("%c",i+64);
		}
		printf("\n");
		}
	
	
	
	
	
	
	}
