#include<stdio.h>
main(){
	float cost, disc, sellcost, am_saved;
	printf(" Enter cost of the item. ");
	scanf("%f",&cost);
	if (cost>=2000 && cost<=4000){
		disc = cost * 0.2 ;
		sellcost = cost - disc ;
		am_saved = cost - sellcost;
	}
	
	else if (cost>4000 && cost<=6000){
		disc = cost * 0.3;
		sellcost = cost - disc ; 
	    am_saved = cost - sellcost;
	}
	
	else if(cost>6000){
		disc = cost * 0.5;
		sellcost = cost - disc ;
		am_saved = cost - sellcost;
	}
	else{
	printf("No discount available...") ;	
	}
		printf(" Marked price: %0.2f\n Selling Price: %0.2f\n Amount saved: %0.2f\n",cost,sellcost,am_saved);
}
