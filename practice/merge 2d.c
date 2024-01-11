#include<stdio.h>
#include<stdlib.h>

int main(){
	int r1,r2,c1,c2;
	int i,j;
	
	printf("Enter rows of 1st array: ");
	scanf("%d",&r1);
	printf("Enter columns of 1st array: ");
	scanf("%d",&c1);
	printf("Enter rows of 2nd array: ");
	scanf("%d",&r2);
	printf("Enter columns of 2nd array: ");
	scanf("%d",&c2);	
	
	
	//int r3=r1+r2; 
	int c3=c1+c2;
	
	int **a1=(int**) malloc (sizeof(int*)*r1);
		for(i=0;i<r1;i++)
		a1[i]=(int*)malloc(sizeof(int)*c1);
		
	printf("Entries of ar 1:");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				scanf("%d",&a1[i][j]);
			}
		}
		int **a2=(int**) malloc (sizeof(int*)*r2);
		for(i=0;i<r2;i++)
		a2[i]=(int*)malloc(sizeof(int)*c2);
		
	printf("Entries of ar 2:");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				scanf("%d",&a2[i][j]);
			}
		}
	printf("printing 1st matrix:\n");
		for(i=0;i<r1;i++)
		{
			for(j=0;j<c1;j++)
			{
				printf("%d ",a1[i][j]);
			}
			printf("\n");
		}
		
	printf("printing 2nd matrix:\n");
		for(i=0;i<r2;i++)
		{
			for(j=0;j<c2;j++)
			{
				printf("%d ",a2[i][j]);
			}
			printf("\n");
		}
int c[3][3];

for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		if(j<3)
		c[i][j]=a1[i][j];
		if(j>=3)
		c[i][j]=a2[i][j-c1];
	}
}

printf("merged array:\n");
for(i=0;i<3;i++)
{
	for(j=0;j<c3;j++)
	printf("%d ",c[i][j]);
	printf("\n");
}

free(a1);
free(a2);

		
}
