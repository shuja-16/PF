#include<stdio.h>

void SortFunction(int *arr, int *size, int );

main()
{
	int n,i,*size,*ptr;

	printf("Enter size of array: ");
	scanf("%d",&n);
	
	int arr[n];
	size=&n;
	ptr=&arr;

printf("Enter Elements of array:\n");
	for(i=0;i<*size;i++)
	{
		printf("Element %d: ",i+1);
		scanf("%d",&arr[i]);
	}
	
	int ch;
	
	printf("How do you want to sort?\n");
	printf("1.Ascending Order\n2.Descending order\n");
	scanf("%d",&ch);

	SortFunction(arr,size,ch);
	
	for(i=0;i<*size;i++)
	printf("%d\t",arr[i]);
}

void SortFunction(int *arr, int *size, int ch){

	int i,j,temp=0;

	switch(ch)
	{
		case 1:
		printf("Ascending order:\n");
			for(i=0;i<*size;i++)
			{
				for(j=0;j<*size;j++)
				{
					if(*(arr+j)>*(arr+i))
					{
					temp=*(arr+i);
					*(arr+i)=*(arr+j);
					*(arr+j)=temp;
				    }
				}
			}
		break;
		case 2:
		{
		printf("Descending order:\n");
			for(i=0;i<*size;i++)
			{
				for(j=0;j<*size;j++)
				{
					if(*(arr+j)<*(arr+i))
					{
					temp=*(arr+i);
					*(arr+i)=*(arr+j);
					*(arr+j)=temp;
				    }
				}
			}
		}
		break;
		default: printf("Invalid input...");	
	}
}

