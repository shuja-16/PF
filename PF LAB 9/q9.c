#include<stdio.h>
check(int arr[],int size){
	int min,max,i;
	max=arr[0];min=arr[0];  

for (i=0;i<size;i++){
	if (arr[i]<=min)
		min=arr[i];
		}

for (i=0;i<size;i++){
	if (arr[i]>=max)
		max=arr[i];
		}
		printf("Min is: %d\nMax is: %d",min,max);

}
main(){
	int size, i;
	printf("enter size of array: ");
	scanf("%d",&size);
	
	int arr[size];
	puts("Enter values of the array:");
	for (i=0;i<size;i++){
		scanf("%d",&arr[i]);
	} 
	check(arr,size);
}
