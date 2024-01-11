#include<stdio.h>

int main(){
	int a,b,c;
	printf("Enter numbers:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if (a>b){
		if (a>c)
		printf("%d is greatest",a);
	}
	if (b>a){
		if (b>c)
		printf("%d is greatest",b);
	}
	if (c>a){
	 	if(c>b)
		printf("%d is greatest",c);
}

}
