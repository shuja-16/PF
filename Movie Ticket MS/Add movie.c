#include <stdio.h>
#include<string.h>

const char password[]="password";

struct movies{
	char name[30];
	char release_date[10];
	char timing[10];
	int  front,mid,back,balcony;
}mc;
void add_movie();

void main(){
	add_movie();
}

void add_movie(){
	char pass[10];
	login:
		
	printf("Enter password to login: ");
	scanf ("%s",&pass);
	
		  if (strcmp(pass,password)==0)	
			{
				printf("Password Matched...\n\n");
				
				FILE *ptr;
				
				ptr=fopen("add_movie_cine.txt","w");
				
				
				printf("Enter Name of Movie you want to add:\n");
				fflush(stdin);
				gets(mc.name);
				printf("Enter release date: ");
				gets(mc.release_date);
				printf("Timings: ");
				gets(mc.timing);
				printf("\nEnter Prices of seating order\n");
				printf("Fronts seats:: From Row 1 to 5: Rs. ");
				scanf("%d",&mc.front);
				printf("Middle seats:: From Row 6 to 10: Rs. ");
				scanf("%d",&mc.mid);
				printf("Back seats:: From Row 11 to 15: Rs.");
				scanf("%d",&mc.back);
				printf("Balcony seat prices: Rs. ");
				scanf("%d",&mc.balcony);
			
			
				fprintf(ptr,"%s\n%s\n%s\n",mc.name,mc.release_date,mc.timing);
				fprintf(ptr,"front: %d mid: %d back: %d balcony: %d\n",mc.front,mc.mid,mc.back,mc.balcony);
				printf("Movie successfully added...");
				fclose(ptr);
			}
		  else
		  {
				printf("Invalid password, Try again.\n\n");
				goto login;
	
				
			}

}
