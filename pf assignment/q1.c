#include<stdio.h>
#include<math.h>
int main(){
	int N, LSD, x1=1, y1=3, x2, y2,count=1; float distance;
	printf("Enter the Least Significant Digit: ");
	scanf("%d",&LSD);
	if(LSD==0){
		N = pow(2,LSD)*(4+3);
		printf("Number of locations = %d\n",N);}
	
	else if (LSD>0 && LSD<4){
		N = pow(2,LSD)*2;
		printf("Number of locations = %d\n",N);}
	else
		N=LSD;

	for(count=1;count<=N;count++){
			printf("The distance from reference point R(1,3) for %d locations.\n",N);
		printf("Enter x coordinate: ");
			scanf("%d",&x2);
		printf("Enter y coordinate: ");
			scanf("%d",&y2);
		distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
		printf("The distane is: %0.2f units\n\n",distance);
	}		
}
