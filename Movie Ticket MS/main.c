#include<stdio.h>
#include<string.h>
#include<windows.h>

const char password[]="password";

struct movies{
	char name[30];
	char release_date[10];
	char timing[10];
	int  front,mid,back,balcony;
}mc,ma,mn;



void Select_Cinema();


void Book_Tickets();

void add_movie_cine();

void view_movie_cine();

void add_movie_atr();

void view_movie_atr();





void main(){

Select_Cinema();
	
}



void Select_Cinema()
{
	int cin;
	
	printf("Press [1] for Cinepax\nPress [2] for Nueplex\nPress [3] for Atrium: \n");
	printf("Enter Your choice: ");
	scanf("%d",&cin);
	if(cin==1)
	{
	system("cls");

	printf("\n||=======================================================================||");

    printf("\n||                          CINEPAX  CINEMA                              ||");

    printf("\n||=======================================================================||\n\n");
	
	
//	Book_Ticket();
	
	
	}
	else if(cin==2)
	{
	system("cls");
	
	printf("\n||=======================================================================||");

    printf("\n||                           NUEPLEX CINEMA                              ||");

    printf("\n||=======================================================================||\n\n");
	
	
	Book_Ticket();
	
	}
	
	else if(cin==3)
	{
	system("cls");
	
	printf("\n||=======================================================================||");

    printf("\n||                         ATRIUM CINEMA                                 ||");

    printf("\n||=======================================================================||\n\n");
	
	
	Book_Ticket();
	
	
	}
	
	else
	printf("Invalid Selection");
}


	


Book_Ticket(){


	int ch;
	char name[30];
	long int mob_no;
	
//	movies();
	printf("Enter Your choice: ");
	scanf("%d",&ch);
	
	switch(ch){
	
	
	case 1: printf("\nBooking for Spiderman Far from Home\n");
			printf("Enter Your Name: ");
		fflush(stdin);	
			scanf("%s",&name);
			printf("Enter Mobile Number: ");
			scanf("%ld",&mob_no);
			break;
	
	default: printf("Invalid choice...");
	}	
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


void view_movie_atr()
{

	char str[50];
	FILE *ptr;
	ptr=fopen("add_movie_atr.txt","r");
	if (ptr==NULL)
	{
		printf("File not found...\n");
		exit(1);
	}
	else 
	{
		printf("\n\n*************FOLLLOWING MOVIES ARE ON SCREENS*************\n\n");
		while (fgets(str, 50, ptr) != NULL) {
        printf("%s", str);
	
	}
	fclose(ptr);

}
}


void add_movie_cine(){
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



void view_movie_cine()
{

	char str[50];
	FILE *ptr;
	ptr=fopen("add_movie_cine.txt","r");
	if (ptr==NULL)
	{
		printf("File not found...\n");
		exit(1);
	}
	else 
	{
		printf("\n\n*************FOLLLOWING MOVIES ARE ON SCREENS*************\n\n");
		while (fgets(str, 50, ptr) != NULL) {
        printf("%s", str);
	
	}
	fclose(ptr);

}
}

