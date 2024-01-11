#include<stdio.h>

int large_element();

int main(){
	large_element();
}
int large_element(){
	int i,size,max;
	printf("Size of the array: ");
	scanf("%d",&size);
int arr[size];
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}

	max=arr[0];

	for(i=0; i<size ;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}

	printf("largest value in the array is: %d",max);
}
