#include<stdio.h>
#include<stdlib.h>
int main(){
	int a[5],choice,i,j,min,temp;
	//printf("Enter size of array:");
	//scanf("%d",&n);
	//=(int *)malloc(n*sizeof(int));
	printf("Enter elements of array:\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("Now sort the arrays by sorting you want:1.Bubble 2.Selection\nEn:");
	scanf("%d",&choice);
	if(choice==1){
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[j]>a[j+1])
			{
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
	}	
		
	}
}
	
	if(choice==2){
	
	//5 2 8 1 3
	
	for(i=0;i<5-1;i++)
	{
		min=i;
		for(j=i+1;j<5;j++)
		{
			if(a[min]>a[j])
			min=j;
		}
		
		temp=a[i];
		a[i]=a[min];
		a[min]=temp;
	}
}
	
printf("After sorting elements of array:\n");
	for(i=0;i<5;i++){
		printf("%d\t",a[i]);
	}
	
	
}

