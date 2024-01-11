#include<stdio.h>
 
main()
{
	char choice;
	
	printf("Would you like to continue (Y/N)? ");
    scanf("%c", &choice);
	
	switch(choice){

	case'Y': 
		printf("\nSuccessfully deleted.\n");
		break;
	case'y': 
		printf("\nSuccessfully deleted.\n");
		break;
	case'N': 
		printf("\nDelete Cancelled.\n");
		break;
	case'n': 
		printf("\nDelete Cancelled.\n");
		break;
	default : 
		printf("Invalid input.");
	}

}
   







