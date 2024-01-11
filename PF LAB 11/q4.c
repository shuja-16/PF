#include<stdio.h>
int calmat(int *ptr1[2][2],int *ptr2[2][2]);
int main(){
	int a[2][2],b[2][2],i,j;
	int *ptr1[2][2];
	int *ptr2[2][2];
	
	printf("Matrix 1:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Element[%d,%d]: ",i+1,j+1);
			scanf("%d",&a[i][j]);
			ptr1[i][j]=&a[i][j];
			
		}
	}
	printf("Matrix 2:\n");
		for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Element[%d,%d]: ",i+1,j+1);
			scanf("%d",&b[i][j]);
			ptr2[i][j]=&b[i][j];

		}
	}

	calmat(ptr1,ptr2);
}
int calmat(int *ptr1[2][2],int *ptr2[2][2]){
	int i,j;
	int resMat[2][2];
	int *ptr3[2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			resMat[i][j]=*ptr1[i][j]+*ptr2[i][j];
			ptr3[i][j]=&resMat[i][j];
	}
		printf("\n");
	}
	printf("After addition matrix is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",*ptr3[i][j]);
	    }
		printf("\n");
	}
}


