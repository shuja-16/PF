#include<stdio.h>
main(){
const int months=12; float avglow=0, avghigh=0;
int temp[months][2], i, j, x, sumlow=0, sumhigh=0, max, min;

//Getting user input	
	for(i=0;i<12;i++){
	printf("Enter HIGHEST temperature of the %d month: ",i+1);
		scanf("%d",&temp[i][0]);

	printf("Enter LOWEST temperature of the %d month: ",i+1);
		scanf("%d",&temp[i][1]);
	}
	max=temp[0][0];
	min=temp[0][1];
	
	for(i=0;i<months;i++){
		sumlow+=temp[i][1];
	//Checking Lowest temperature of the year.
		if (temp[i][1]<min)
		min=temp[i][1];	
	}
	for(i=0;i<months;i++){
		sumhigh+=temp[i][0];
	//Checking Highest temperature of the year.
		if (temp[i][0]>max)
		max=temp[i][0];
	}
	//Calculating Averages
	avghigh=sumhigh/12.0;
	avglow=sumlow/12.0;

	printf("\nAverage of low tempertaures: %0.2f\n",avglow);
	printf("Average of high tempertaures: %0.2f\n",avghigh);
	
	printf("Lowest tempertaure of the year is: %d\n",min);
	printf("Highest tempertaure of the year is: %d\n",max);
}
