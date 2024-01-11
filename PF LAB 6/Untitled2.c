#include <stdio.h>
int main(){
    int r=0,l,b;
    float areasq,arearect,areacirc; 
    printf("enter l");
    scanf("%d",&l) ;
	printf("enter b");
    scanf("%d",&b);
	printf("enter r");
	scanf("%d",&r);
	
	if (l==b){
		areasq=l*b;
		printf("area of square is: %d",areasq);}
	else if(l!=b){
		arearect=l*b;
		printf("area of Rectangle is: %d",arearect);}
	if(r!=0){
		areacirc=3.142*r;
	 	printf("cirlce area is %d",areacirc);
		 }
;
	
    
}
