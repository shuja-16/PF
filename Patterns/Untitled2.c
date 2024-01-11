#include <stdio.h>    
     
int main()    
{    
    //Initialize array     
    int size,arr[size];      
	int i;  
	printf("size: ");
	fflush(stdin);
	scanf("%d",&size);
	
    //Calculate length of array arr        
    
    for(i=0;i<size;i++)
    {
    	scanf("%d",&arr[i]);
	}
    
        
    //Initialize max with first element of array.    
    int max = arr[0];    
        
    //Loop through the array    
    for ( i = 0; i < size; i++) {     
        //Compare elements of array with max    
       if(arr[i] > max)    
           max = arr[i];    
    }      
    printf("Largest element present in given array: %d\n", max);    
    return 0;    
}    
