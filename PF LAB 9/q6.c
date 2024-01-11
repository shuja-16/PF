#include<stdio.h>

int getdata(int h,int a){
	printf("Enter h then a:\n");
	scanf("%d %d",&h,&a);
	volumecal(h,a);	
}
volumecal(int h,int a){
	float v;
	v=a*a*(h/3.0);
	printf("volume is %0.2f",v);	
}
main(){
	int h,a;
	getdata(h,a);
	return 0;
}
