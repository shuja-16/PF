#include<stdio.h>
#include<stdlib.h>

int **merge(int a1[][3],int,int a2[][3],int);

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
	
	
	int r3=r1+r2; //int c3=c1+c2;
	
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
		
	int **p=merge(a1,r1,a2,r2);
	printf("merged array:\n");
	for(i=0;i<r1+r2;i++)
	{
		printf("%d \n",**p[i]);
 	}
	
	free(p);

free(a1);
free(a2);

}


int **merge(int a1[][3],int r1,int a2[][3],int r2 )
{	



	int r3=r1+r2;
	int i,j;	
	int **c=(int**)malloc(r3*sizeof(int*));
	for(i=0;i<r3;i++)
	{
		c[i]=(int*)malloc(3*sizeof(int));
	}
	
	for(i=0;i<r3;i++)
	{	if(i<r1)
		c[i]=a1[i];
		if(i>=r1)
		c[i]=a2[i-r1];
	}
	return c;

		
}
