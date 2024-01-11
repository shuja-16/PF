#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>




static int id=1100;
const char password[]="password";

struct movies{
	char name[30];
	char release_date[10];
	char timing[10];
	int  front,mid,back,balcony;
}mc,ma,mn;



void Select_Cinema();


void Book_Ticket();

void add_movie_cine();

void view_movie_cine();

void add_movie_atr();

void view_movie_atr();

void add_movie_nupl();

void view_movie_nupl();

void seats();


main(){
	system("cls");
	system("color 0F");
		
        printf("\n||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~||");

        printf("\n||                                                                       ||");

        printf("\n||                        Movie Ticket Booking System                    ||");

        printf("\n||                                                                       ||");

        printf("\n||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~||");
    



Select_Cinema();
	
}


void Select_Cinema()
{
	int cin ,ch; 
	
//	printf("\n||                                                                       ||");

    printf("\n||                         Press [1] for Cinepax                         ||");

	printf("\n||-----------------------------------------------------------------------||");

    printf("\n||                         Press [2] for  Nueplex                        ||");

	printf("\n||-----------------------------------------------------------------------||");

    printf("\n||                         Press [3] for  Atrium                         ||");

    printf("\n||-----------------------------------------------------------------------||\n\n");
	
	
	printf("Enter Your choice: ");
select:
	scanf("%d",&cin);
	if(cin==1)
	{
	system("cls");
	system("color 0C");

	printf("\n||=======================================================================||");

    printf("\n||                          CINEPAX  CINEMA                              ||");

    printf("\n||=======================================================================||\n\n");
	
	printf("Press [1] to Book tickets.\n");
	printf("Press [2] to Add movie (Admin Only)\n");
	printf("press [3] to View movie\n");
	printf("Enter Your Choice: ");

	scanf("%d",&ch);
	
	switch(ch)
	{
	 case 1: Book_Ticket(); break;
	
	case 2: add_movie_cine(); break;
	
	case 3: view_movie_cine(); break;
	
	default: printf("Invalid choice...\n"); 

	}
	}




	else if(cin==2)
	{
	system("cls");
	system("color 0E");
	
	
	printf("\n||=======================================================================||");

    printf("\n||                           NUEPLEX CINEMA                              ||");

    printf("\n||=======================================================================||\n\n");
	
	printf("Press [1] to Book tickets.\n");
	printf("Press [2] to Add movie (Admin Only)\n");
	printf("press [3] to View movie\n");
	printf("Enter Your Choice: ");
	scanf("%d",&ch);
	
	switch(ch)
	{
    case 1: Book_Ticket(); break;
	
	case 2: add_movie_cine(); break;
	
	case 3: view_movie_cine(); break;
	
	default: 	printf("Invalid choice...\n"); 
			    
				

	}
	}
	
	
	
	
	else if(cin==3)
	{
	system("cls");
	system("color 0A");
	
	printf("\n||=======================================================================||");

    printf("\n||                         ATRIUM CINEMA                                 ||");

    printf("\n||=======================================================================||\n\n");
	
	printf("Press [1] to Book tickets.\n");
	printf("Press [2] to Add movie (Admin Only)\n");
	printf("press [3] to View movie\n");
	printf("Enter Your Choice: ");
	scanf("%d",&ch);
	
	switch(ch)
	{
	 case 1: Book_Ticket(); break;
	
	case 2: add_movie_cine(); break;
	
	case 3: view_movie_cine(); break;
	
	default: printf("Invalid choice...\n"); 
			
	}
	
	
	}
	
	else
	{
	printf("Invalid Selection...\n");
	goto select;
	}

}

void Book_Ticket(){
 
 		int **seat,choice,price=500,slection,i;
		seat=(int **)calloc(101,sizeof(int *));
		for (i=0;i<3;i++)
		*(seat+i)=(int *)calloc(101,sizeof(int ));
 
 //int *array=seat;
 struct movies mc;


	int s1,s2,s3,s4,amount;
	char name[30],ch;
	long int mob_no;
	
	char str[50];
	
	FILE *ptr, *ufp;
	ptr=fopen("add_movie_cine.txt","r");

	if (ptr==NULL)

	{
		printf("File not found...\n");
		exit(1);
	}

	else 

	{
	
		ptr=fopen("add_movie_cine.txt","r");
		
		fscanf(ptr,"%s  %s %s  %d  %d  %d  %d\n%d %d %d %d",mc.name,mc.release_date,mc.timing,&mc.front,&mc.mid,&mc.back,&mc.balcony,&s1,&s2,&s3,&s4);
	
		printf("\n\n\t\t||============FOLLLOWING MOVIE IS ON SCREEN==========||\n\n");
	
		printf("\t\t\tMovie Name: %s\n",mc.name);

        printf("\t\t\tRelease Date (DD/MM/YYYY): %s\n",mc.release_date);
        
        printf("\t\t\tTiming: %s\n",mc.timing);

		printf("\n\t\t||====================================================||\n\n");

	Sleep(700);
	
	}
	
	 if(s1==0&&s2==0&&s3==0&&s4==0)

    {

        printf("\nThe seats are full! Visit after few days...\n\n");

        main();

    }
	
	
	
	fclose(ptr);
	
	

	rewind(ptr);
	
	
		
		
	/*	ptr=fopen("add_movie_cine","r");

        fscanf(ptr,"%s  %s %s  %d  %d  %d  %d\n%d %d %d %d",mc.name,mc.release_date,mc.timing,&mc.front,&mc.mid,&mc.back,&mc.balcony,&s1,&s2,&s3,&s4);

        fclose(ptr);*/
		
		
		printf("Enter Your Name: ");
		fflush(stdin);	
	
/*label*/	enter_name: 
	
		scanf("%s",&name);
		
		for(i=0;i<strlen(name);i++)
		{
		
			if((name[i]<'a' || name[i]>'z') && (name[i]<'A' || name[i]>'Z'))
			{
			printf("Invalid Name...\nPlease Re-enter name: ");
			goto enter_name;
			}
		}
			
			
			
			printf("Enter Mobile Number (format: 03*********): ");
			
			number:
			scanf("%ld",&mob_no);
			
	
		
		
	int j;
		printf("\n                                SCREEN\n\n\n");
		for (i=1;i<=100;i++)
		{
			if (array[i]==0)
			{
					printf("%d\t",i);
					
			}
			else 
			{
					printf("*\t",i);
					
			}
			if(i%10==0)
				printf("\n\n");
		}

		printf("Press Enter to Return to Main Menu.\n");
		while(getch()!=13)
		printf(" ");

		
		
		printf("\nTickets Booked Successsfully...\n\nPlease Wait");
		Sleep(800);
		printf(".");
		Sleep(800);
		printf(".");
		Sleep(800);
		printf(".");		
	 	
	 	
	system("cls");
	
		printf("\n\t\t||======== Bill ========||\n\n");
		printf("\t\t Booking no.    %d\n",id);
		printf("\t\t Movie Name:    %s\n",mc.name);
		printf("\t\t Timing:        %s\n\n", mc.timing);
		printf("\t\t Name:          %s\n",name);
		printf("\t\t Mobile Number: 0%ld\n",mob_no);
		printf("\t\t Total Seats:   %d\n",seat);
		printf("\t\t Amount:        Rs. %d\n",amount);
	
		
		
		
		
		
		printf("\n***ENJOY YOUR MOVIE***\n");
		printf("Thank You For Booking Tickets\nVisit again sometime...\n\n");
		
		id++;
		
		ufp=fopen("add_movie_cine.txt","w");

       	fprintf(ufp,"%s  %s %s %d  %d  %d  %d\n%d %d %d %d",mc.name,mc.release_date,mc.timing,mc.front,mc.mid,mc.back,mc.balcony,s1,s2,s3,s4);

                fclose(ptr);

        fclose(ufp);
		
		
		
		
		printf("Press Enter to Return to Main Menu.\n");
		while(getch()!=13)
		printf(" ");
		
		printf("\nRETURNING TO  MAIN MENU");
		Sleep(800);
		printf(".");
		Sleep(800);
		printf(".");
		Sleep(800);
		printf(".");		

		main();
		

		
		
		
		
			
	}	

	







void add_movie_atr(){

	char pass[10],ans;

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
				
					fflush(stdin);	
				printf("Do you want to return to main menu?(y/n)");
				scanf("%c",&ans);
				if (ans=='y' || 'Y')
					main();
				else
					exit(1);
				
				
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
	printf("\n\n||============FOLLLOWING MOVIES ARE ON SCREENS==========||\n\n");
		while (fgets(str, 50, ptr) != NULL) {
        printf("%s", str);
	
	}
	fclose(ptr);

}
	main();
	
}


void add_movie_cine(){
	char pass[10], ans;
	int s1=40,s2=40,s3=40,s4=80;
	
	login:
		
	printf("Enter password to login: ");
	scanf ("%s",&pass);
	
		  if (strcmpi(pass,password)==0)	
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
			
			
				fprintf(ptr,"%s %s %s ",mc.name,mc.release_date,mc.timing);
				fprintf(ptr,"%d %d %d %d\n",mc.front,mc.mid,mc.back,mc.balcony);
				fprintf(ptr,"%d %d %d %d\n",s1,s2,s3,s4);
				printf("Movie successfully added...\n");
				fclose(ptr);
			
				fflush(stdin);	
				printf("Do you want to return to main menu?(y/n)");
				scanf("%c",&ans);
				if (ans=='y' || 'Y')
					main();
				else
					exit(1);
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
	printf("\n\n||============FOLLLOWING MOVIES ARE ON SCREENS==========||\n\n");
		while (fgets(str, 50, ptr) != NULL) {
        printf("%s", str);
	
	}
	fclose(ptr);
	Sleep(1000);
	
	main();
	}

}





void add_movie_nupl(){
	char pass[10],ans;
	login:
		
	printf("Enter password to login: ");
	scanf ("%s",&pass);
	
		  if (strcmpi(pass,password)==0)	
			{
				printf("Password Matched...\n\n");
				
				FILE *ptr;
				
				ptr=fopen("add_movie_nupl.txt","w");
				
				
				printf("Enter Name of Movie you want to add:\n");
				fflush(stdin);
				gets(mn.name);
				printf("Enter release date: ");
				gets(mn.release_date);
				printf("Timings: ");
				gets(mn.timing);
				printf("\nEnter Prices of seating order\n");
				printf("Fronts seats:: From Row 1 to 5: Rs. ");
				scanf("%d",&mn.front);
				printf("Middle seats:: From Row 6 to 10: Rs. ");
				scanf("%d",&mn.mid);
				printf("Back seats:: From Row 11 to 15: Rs.");
				scanf("%d",&mn.back);
				printf("Balcony seat prices: Rs. ");
				scanf("%d",&mn.balcony);
			
			
				fprintf(ptr,"%s\n%s\n%s\n",mn.name,mn.release_date,mn.timing);
				fprintf(ptr,"front: %d mid: %d back: %d balcony: %d\n",mn.front,mn.mid,mn.back,mn.balcony);
				printf("Movie successfully added...");
				
				fflush(stdin);	
				printf("Do you want to return to main menu?(y/n)");
				scanf("%c",&ans);
				if (ans=='y' || 'Y')
					main();
				else
					exit(1);
				fclose(ptr);
			}
		  else
		  {
				printf("Invalid password, Try again.\n\n");
				goto login;
	
				
			}

}



void view_movie_nupl()
{

	char str[50];
	FILE *ptr1;
	ptr1=fopen("add_movie_nupl.txt","r");
	if (ptr1==NULL)
	{
		printf("File not found...\n");
		exit(1);
	}
	else 
	{
		printf("\n\n*************FOLLLOWING MOVIES ARE ON SCREENS*************\n\n");
		while (fgets(str, 50, ptr1) != NULL) {
        printf("%s", str);
	
	}
	fclose(ptr1);

	}
	main();
}

