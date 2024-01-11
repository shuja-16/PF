#include<stdio.h>
int main(){
int ton,cargos;
float mini,truck,train,totalton;
float perc_mini,perc_truck,perc_train,avg;
	printf("Number of cargos: ");
	scanf("%d",&cargos);
	
	while(cargos!=0){
		printf("tons: ");
		scanf("%d",&ton);
		if(ton>0 && ton<=3)
		mini = mini + ton; 
		else if (ton>3 && ton<=11)
		truck = truck + ton;
		else if (ton>11)
		train = train + ton;
		else printf("invalid input..");
		cargos--;
	}
	totalton=mini+truck+train;	
	avg = (mini*200+truck*175+train*120)/totalton;
	perc_mini= (mini/totalton)*100;
	perc_truck= (truck/totalton)*100;
	perc_train= (train/totalton)*100;
	
	printf("avg = %0.2f\n",avg);
	printf("pecentage of mini bus = %0.2f\n",perc_mini);
	printf("pecentage of truck = %0.2f\n",perc_truck);
	printf("pecentage of train = %0.2f\n",perc_train);
}
