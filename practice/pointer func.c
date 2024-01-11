#include<stdio.h>
#include<stdlib.h>


int *merge(int p[],int n1,int q[],int n2)
{
	int i;
	int n=n1+n2;
	
	int *c=(int*)malloc(n*sizeof(int));
	
	for(i=0;i<n;i++)
	{
		if(i<n1)
		c[i]=p[i];
		if(i>=n1)
		c[i]=q[i-n1];
	}
	return c;
	free(c);
}

int main()
{
	int n1,n2;
	int i;
	printf("Enter size of 1st array: ");
	scanf("%d",&n1);
	printf("Enter size of 2nd array: ");
	scanf("%d",&n2);
	
	int *p=(int*)malloc(n1*sizeof(int));
	int *q=(int*)malloc(n2*sizeof(int));
	
	
	printf("Enter elements of 1st array:\n");
	for(i=0;i<n1;i++)
	scanf("%d",&p[i]);

	printf("Enter elements of 2nd array:\n");
	for(i=0;i<n2;i++)
	scanf("%d",&q[i]);
	
	int* a=merge(p,n1,q,n2);
	
	
	printf("Merged Array:\n");
	for(i=0;i<n1+n2;i++)
	printf("%d ",*(a+i));

free(p);
free(q);
		
}
