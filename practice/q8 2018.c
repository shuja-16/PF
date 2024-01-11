#include<stdio.h>
#include<stdlib.h>

void func(float **p[3][7]);

int main()
{
	int i,j,k;
	float **p=(float **) malloc (sizeof(float*)*3);
	for(i=0;i<3;i++)
		p[i]=(float *) malloc (sizeof(float)*7);
		
	
	printf("Enteries: \n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<7;j++)
		{
			scanf("%f",&p[i][j]);
		}
	}

	func(p);
	
}

void func(float **p[3][7]){

int i,j;float sum=0,sum1=0,sum2=0,sum3=0,avg1=0,avg2=0,avg3=0,avg=0;

	printf("Printing array:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<7;j++)
		{
			printf("%0.0f ",*(*(p+i)+j));
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<7;j++)
		{
			sum+=**p[i][j];
		}
	}
		
	/*	avg1=sum1/7.0;
		avg2=sum2/7.0;
		avg3=sum3/7.0;*/
		avg=sum/21.0;
//	printf("avg 1: %0.2f\navg 2: %0.2f\navg 3: %0.2f\navg: %0.2f\n",avg1,avg2,avg3,avg);
		printf("avg: %0.2f\n",avg);
}
