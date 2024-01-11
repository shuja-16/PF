#include<stdio.h>
main(){
	int runtime, icecream=0, hours, totalcost, days;
	int extrahr, rem_ice=0,extra_ice=0,cost_8=0,cost_16=0;
	printf("Enter number of icecreams you want to order: ");
	scanf("%d",&icecream);
	printf("Enter runtime\nPress 8 for hrs/day\nPress 16 for 16 hrs/day:  ");
	scanf("%d",&runtime);
	hours=icecream/50;
	
	switch(runtime){
		case 8 : 
			extrahr=hours%8;
			days=icecream/400;
			totalcost=icecream*60;
			printf("order will take %d days and %d hours\n",days,extrahr);
		break;
	
		case 16 :
			extrahr=hours%16;
			days=icecream/800;
			printf("order will take %d days and %d hours\n",days,extrahr); 
			extra_ice=icecream%400;
			rem_ice=icecream-extra_ice;
			if (extrahr<=8){
				cost_8=(rem_ice/2)*60+(extra_ice*60);
				cost_16=(rem_ice/2)*120;
			}
			else if(extrahr>8){
				rem_ice=rem_ice-400;
				cost_8=((rem_ice/2)*60)+(400*60);
				cost_16=(rem_ice/2)*120+(extra_ice*120);
			}
			printf("8 hr cost: %d\n",cost_8);
			printf("16 hr cost: %d\n",cost_16);
			totalcost=cost_8+cost_16;
		break;}
		printf("Total cost is: %d\n",totalcost);
	}
