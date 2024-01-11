#include <stdio.h>
#include <stdlib.h>

void countEven(int *array, int *size)
{
    int i, count = 0;

    for(i=0;i<=*size-1;i++)
    {
        if(*(array+i)%2==0)
            count++;
    }
    
    printf("Total even numbers are: %d",count);
}

main(){
	int i,n;
    int *size,*array;
    
    printf("Size of Array: ");
    scanf("%d",&n);
    size=&n;
    
    int arr[n];
    
    for(i=0;i<*size;i++)
    {
    	printf("Enter element %d: ",i+1);
    	scanf("%d",&arr[i]);
    	array=arr;
	}
	countEven(array,size);
}
