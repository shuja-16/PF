#include<stdio.h>
main(){
	int i,Number[50];
	
	//initializing array
	for(i=0;i<50;i++){
		if(i<25)
			Number[i]=i*2;
		else
			Number[i]=i*3;		
	}

	//final output	
	for(i=0;i<50;i++){
		printf("%d\t",Number[i]);
		if( (i+1) % 10 == 0 )
		printf("\n");	
	}
}
