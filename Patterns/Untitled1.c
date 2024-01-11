#include<stdio.h>
main(){
	int j,i,r,s,n;
	printf("rows ");
	scanf("%d",&n);
	for(r=1;r<=n;r++){
		for(s=1;s<=n-r;s++){
			printf(" ");
		}
		for (j=1;j<=r;j++){
			printf("* ");
		}
		printf("\n");
	}
	for(r=n-1;r>=1;r--){
		for(s=1;s<=n-r;s++){
			printf(" ");
		}
		for(j=1;j<=r;j++)
			printf("* ");
		printf("\n");
	}
	}
	
