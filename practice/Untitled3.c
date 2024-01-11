#include<stdio.h>


main()
{
	
	int n,i,j,k,temp;
	printf("Size of array: ");
	scanf("%d",&n);
	
	int arr[100];
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	
	
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	printf("\n\n");
	
	printf("How many times You want it to rotate: ");
	scanf("%d",&k);
	
	for(j=0;j<k;j++)
	{
	
		temp=arr[0];
		
		for(i=0;i<n;i++)
		arr[i+1] = arr[i];
		
		arr[i]=temp;
	
	}
	printf("\nLeft rotation:\n");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);

}





