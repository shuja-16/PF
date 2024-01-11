#include<stdio.h>
main()
{
	int a1[3],a2[3],temp,i,j;
	int *x=&a1,*y=&a2;
	
		printf("First Array:\n");
	for(i=0;i<3;i++)
		scanf("%d",&a1[i]);
	
		printf("Second Array:\n");
	for(i=0;i<3;i++)
		scanf("%d",&a2[i]);
		
for(i=0;i<3;i++)
{
temp = *(x+i);
*(x+i)=*(y+i);
*(y+i)=temp;
}	
printf("RESULT:\n");
	for(i=0;i<3;i++)
	{
	printf("%d\t",a1[i]);	
	}
	printf("\n");	
	for(i=0;i<3;i++)
	{
	printf("%d\t",a2[i]);	
	}
}
