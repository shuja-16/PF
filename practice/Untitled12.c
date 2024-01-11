#include<stdio.h>
#include<stdlib.h>
int main(){
	int **arr1,**arr2,**arr3,i,j;
	//firstly dynamically memory allocation of first array
	arr1=(int**)malloc(3*sizeof(int *));
	for(i=0;i<3;i++){
     arr1[i]=(int *)malloc(3*sizeof(int));
 }   
     printf("Enter elements of array1:");
     for(i=0;i<3;i++){
     	for(j=0;j<3;j++){
     	   printf("Array1(%d,%d):",i,j);
     	   scanf("%d",&arr1[i][j]);
		 }
	 }
	  printf("\nelements of array1:\n");
         for(i=0;i<3;i++){
     	for(j=0;j<3;j++){
     	   printf("%d\t",*(*(arr1+i)+j));
		 }
		 printf("\n");
	 }
	 	arr2=(int**)malloc(3*sizeof(int *));
	for(i=0;i<3;i++){
     arr2[i]=(int *)malloc(3*sizeof(int));
 }   
     printf("Enter elements of array2:");
     for(i=0;i<3;i++){
     	for(j=0;j<3;j++){
     	   printf("Array2(%d,%d):",i,j);
     	   scanf("%d",&arr2[i][j]);
		 }
	 }
	  printf("\nelements of array1:\n");
         for(i=0;i<3;i++){
     	for(j=0;j<3;j++){
     	   printf("%d\t",arr2[i][j]);
		 }
		 printf("\n");
	 }
	arr3=(int**)malloc(3*sizeof(int *));
	 for(i=0;i<3;i++)
     arr3[i]=(int *)malloc(6*sizeof(int));
        for(i=0;i<3;i++){
     	for(j=0;j<6;j++){
     		if(j<3){
		arr3[i][j]=arr1[i][j];	 
		}	if(j>=3){
 
           arr3[i][j]=arr2[i][j-3];
}
}
}
	  printf("\nelements of array3:\n");
         for(i=0;i<3;i++){
     	for(j=0;j<6;j++){
     	   printf("%d\t",arr3[i][j]);
		 }
		 printf("\n");
	 }

}
