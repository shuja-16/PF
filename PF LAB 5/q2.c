#include<stdio.h>
 
main()
{
	
    int t;
    printf("Enter the time: ");
    scanf("%d", &t);
    
    if(t>=5 && t<=11)
        printf("\nGood Morning\n");
    else if(t>=12 && t<=18)
        printf("\nGood Evening\n");
    else 
        printf("\nGood Night\n");
	
	
}
 
