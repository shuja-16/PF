#include<stdio.h>

main()
{
	int x,y,z, *ptr,*ptr1,*ptr2;
	printf("Enter three numbers:\n");
	scanf("%d %d %d",&x,&y,&z);
	ptr=&x;
	ptr1=&y;
	ptr2=&z;
if(*ptr>*ptr1 && *ptr>*ptr2)
	printf("Largest: %d\n",*ptr);
else if(*ptr1>*ptr && *ptr1>*ptr2)
	printf("Largest: %d\n",*ptr1);
else 
	printf("Largest: %d\n",*ptr2);		
	
if(*ptr<*ptr1 && *ptr<*ptr2)
	printf("Smallest: %d\n",*ptr);
else if(*ptr1<*ptr && *ptr1<*ptr2)
	printf("Smallest: %d\n",*ptr1);
else 
	printf("Smallest: %d\n",*ptr2);	

}
