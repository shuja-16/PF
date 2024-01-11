#include<stdio.h>
#include<string.h>

main()
{
	int m,c,z, k; float j,l;
	int *p=&m ,*q=&c, *r=&z;
	scanf("%d %d %d",p,q,r);
	printf("Total marks: ");
	scanf("%d",&k);
	fun(p,q,r,&k,&j,&l);
	printf("Percentage: %0.2f%%\n",j);
	printf("Avg : %0.2f\n",l);

}

void fun(int *p, int *q , int *r,int *k, float *j, float *l)
{
	*j= ((*p+*q+*r)*100.0) / *k;
	*l=	(*p+*q+*r)/3.0;
}
