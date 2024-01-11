#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX_LEN 100

void func(int*, int*, int*, int* , float*);

void main(){
	int x,y,z,k; float b;
	
	
	scanf("%d %d %d",&x,&y,&z);

	func(&x,&y,&z,&k,&b);
	
	printf("sum=%d\navg=%0.2f",k,b);
		
}

void func(int *p, int* q, int* r, int *k, float *b)
{
	*k = *p+*q+*r ;
	*b = *k/3.0;
		

}
