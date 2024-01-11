#include<stdio.h>
int countfreq();
main(){
	int i, size=0 ;
	printf("Size of array: ");
	scanf("%d",&size);
	int array1[size];
    int freq[size]; //<--array to store frequency

	for( i=0;i<size;i++){
	array1[i]=rand()%10;
	printf("%d ",array1[i]);
	freq[i]=1;	
	}
	printf("\n");
	countfreq(array1,freq,size);
}

int countfreq(int array1[], int freq[], int size){
	int i,j,checked=-1;
 
	for ( i=0; i<size; i++){	
	int count=1;

/*ONCE ELEMENT FREQUENCY IS CALCULATED 
SAME OTHER ELEMENTS ARE MARKRD AS CHECKED*/
	
		for(j=i+1;j<size;j++){
		if(array1[i]==array1[j]){
				count++;
			freq[j]=checked;
		}
		
		if (freq[i]!=checked)
			freq[i]=count;	
		}
	}
// FINAL OUTPUT
    for ( i=0; i<size; i++){
		if(freq[i]!=checked)
		printf("\nElement %d occured %d times\n",array1[i],freq[i]);
	}
}



