#include <stdio.h>
#include<string.h>

const char password[]="password";

struct{
	char name[30];
	char release_date[10];
	char timing[10];
	int  front,mid,back,balcony;
	
}ma;

void main(){
	
	add_movie_atr();
	
}


void add_movie_atr(){

	char pass[10];

login:	
	printf("Enter password: ");
	scanf ("%s",&pass);
	
	if (strcmp(pass,password)==0)
	{
		
	FILE *ptr;
	ptr=fopen("add_movie_atr.txt","w");
			
				printf("Enter Name of Movie you want to add:\n");
				fflush(stdin);
				gets(ma.name);
				printf("Enter release date: ");
				gets(ma.release_date);
				printf("Timings: ");
				gets(ma.timing);
				printf("\nEnter Prices of seating order\n");
				printf("Fronts seats:: From Row 1 to 5: Rs. ");
				scanf("%d",&ma.front);
				printf("Middle seats:: From Row 6 to 10: Rs. ");
				scanf("%d",&ma.mid);
				printf("Back seats:: From Row 11 to 15: Rs.");
				scanf("%d",&ma.back);
				printf("Balcony seat prices: Rs. ");
				scanf("%d",&ma.balcony);
			
			
				fprintf(ptr,"%s\n%s\n%s\n",ma.name,ma.release_date,ma.timing);
				fprintf(ptr,"PRICES\nfront: Rs. %d mid: Rs. %d back: Rs. %d balcony: Rs.%d\n",ma.front,ma.mid,ma.back,ma.balcony);
				printf("Movie successfully added...");
				fclose(ptr);
	
	
	
	}
	else
	{
	printf("Invalid Password... Please try again");
	goto login;	
	}
	
}
	
	

