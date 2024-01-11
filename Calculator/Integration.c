#include<stdio.h>

int main(){
	int i,n;
    
    printf("\t\tPOLYNOMIAL INTEGRATION\n");
    printf("\t\t======================\n\n");

	printf("Enter number of terms in the equation you want to Integrate: "); 
	scanf("%d",&n);
	
	float coeff[n],power[n], cof=0,pow=0;
	
	fflush(stdin);
	for(i=0;i<n;i++){
	printf("\nInput coefficient for term No.%d: ",i+1);
	scanf("%f",&coeff[i]);
	
	printf("Input power for term No.%d: ",i+1);
	scanf("%f",&power[i]);
		}
	
	printf("\nPolynomial Function Entered is:\n");
	
	for(i=0;i<n;i++)
	{
		if(coeff[i]<0)
		printf("- %0.1fx^%0.1f ",coeff[i]*-1,power[i]);
		
		else if (coeff[i]==0)
		continue;
		
		
		else if (power[i]==0)
		printf("+ %0.1f ",coeff[i]);
		
		else
		printf("+ %0.1fx^%0.1f ",coeff[i],power[i]);
	}
	
	
	printf("\n\nIntegral:\n");
	printf("============\n\n");
	
	for(i=0;i<n;i++){
		cof=coeff[i];
		pow=power[i];
		
		pow=pow+1;
		cof=cof/pow;
		
		if(cof<0)
			printf("- %.1fx^%.1f + ",cof*-1,pow);
		
		else if(pow==0)
			printf(" %.1f ln x + ",coeff[i]);	
		
		else if(pow==1)
			printf(" %.1fx + ",coeff[i]);
		
		else if(cof==0)
				continue;
				
		else
			printf(" %.1fx^%.1f + ",cof,pow);
		
		}
	printf("c");
}
