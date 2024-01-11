#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>




static int id=1100;
const char password[]="password";



struct movies{
	char name[30];
	char release_date[10];
	char screen_date[10];
	char timing[10];
	int  front,mid,back,balcony;
}ma[2];



void Select_Cinema();

void Book_Ticket_Cineplex();

void Book_Ticket_Nueplex();

void Book_Ticket_Atrium();

void add_movie_cine();

void view_movie_cine();

void add_movie_atr();

void view_movie_atr();

void add_movie_nupl();

void view_movie_nupl();

void Select_Cinema_admin();





main(){
	int ch;
printf("Choice: ");
scanf("%d",&ch);

switch(ch)
{
	case 1:
	Book_Ticket_Atrium();break;
	
	case 2:
		 add_movie_atr();break;
		 
	case 3: 
		view_movie_atr();break;
	
	default: printf("Invalid.\n");
}


}



/*void Select_Cinema_admin()
{
system("color F4");
int cin ,ch, count=1;
char pass[10],ans;

printf("Enter password: ");
login:
scanf ("%s",&pass);

if (count==3)
	{	
		printf("TRY AGAIN LATER...");
		exit(1);
	}

if (strcmp(pass,password)==0)
{

 	printf("\n||=======================================================================||");

    printf("\n||                         Press [1] for Cinepax                         ||");

	printf("\n||-----------------------------------------------------------------------||");

    printf("\n||                         Press [2] for  Nueplex                        ||");

	printf("\n||-----------------------------------------------------------------------||");

    printf("\n||                         Press [3] for  Atrium                         ||");

    printf("\n||=======================================================================||\n\n");


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




 add_movie_cine(); 


}






else if(cin==2)
{
system("cls");
system("color 0E");


printf("\n||=======================================================================||");

    printf("\n||                           NUEPLEX CINEMA                              ||");

    printf("\n||=======================================================================||\n\n");

 add_movie_nupl();
}




else if(cin==3)
{
system("cls");
system("color 0A");

printf("\n||=======================================================================||");

    printf("\n||                         ATRIUM CINEMA                                 ||");

    printf("\n||=======================================================================||\n\n");




 add_movie_atr(); }

}
	else 
	{
		printf("Wrong password...try again\n");
		count++;
		goto login;
	}
}



void Select_Cinema()
{
	int cin ,ch; 
	
    printf("\n||-----------------------------------------------------------------------||");                                                                

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
	printf("press [2] to View movie\n");
	printf("Enter Your Choice: ");

	scanf("%d",&ch);
	
	switch(ch)
	{
	case 1: Book_Ticket_Cineplex(); break;
	
	case 2: view_movie_cine(); break;
	
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
	printf("press [2] to View movie\n");
	printf("Enter Your Choice: ");
	scanf("%d",&ch);
	
	switch(ch)
	{
    case 1: Book_Ticket_Nueplex(); break;
	case 2: view_movie_nupl(); break;
	
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
	printf("press [2] to View movie\n");
	printf("Enter Your Choice: ");
	scanf("%d",&ch);
	
	switch(ch)
	{
    case 1: Book_Ticket_Atrium(); break;
	case 2: view_movie_atr(); break;
	
	default: printf("Invalid choice...\n"); 
			
	}
	
	
	}
	
	else
	{
	printf("Invalid Selection...\n");
	goto select;
	}

}*/




/*void Book_Ticket_Nueplex(){
 
 
 struct movies mn;

	int i;
	int s1,s2,s3,s4;
	char name[30],ch;
	long int mob_no;
	
	char str[50];
	
	FILE *fptr;
	fptr=fopen("add_movie_nupl.txt","r");

	if (fptr==NULL)

	{
		printf("File not found...\n");
		exit(1);
	}

	else 

	{
	
	//	fptr=fopen("add_movie_nupl.txt","r");
		
		fscanf(fptr,"%s  %s %s  %d  %d  %d  %d\n%d %d %d %d",mn.name,mn.release_date,mn.timing,&mn.front,&mn.mid,&mn.back,&mn.balcony,&s1,&s2,&s3,&s4);
	
		printf("\n\n\t\t||============FOLLLOWING MOVIE IS ON SCREEN==========||\n\n");
	
		printf("\t\t\tMovie Name: %s\n",mn.name);

        printf("\t\t\tRelease Date (DD/MM/YYYY): %s\n",mn.release_date);
        
        printf("\t\t\tTiming: %s\n",mn.timing);

		printf("\n\t\t||====================================================||\n\n");

	Sleep(700);
	
	}
	
	 if(s1==0&&s2==0&&s3==0&&s4==0)

    {

        printf("\nThe seats are full! Visit after few days...\n\n");

        main();

    }
	
	
	
	fclose(fptr);
	
	

	rewind(fptr);
	
	
		
		
	/*	ptr=fopen("add_movie_cine","r");

        fscanf(ptr,"%s  %s %s  %d  %d  %d  %d\n%d %d %d %d",mc.name,mc.release_date,mc.timing,&mc.front,&mc.mid,&mc.back,&mc.balcony,&s1,&s2,&s3,&s4);

        fclose(ptr);*/
		
		
	/*	printf("Enter Your Name: ");
		fflush(stdin);	
	
label	enter_name: 
	
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
			
	
		/*	if(mob_no<00000000000 && mob_no>9999999999){
			printf("Invalid Mobile Number...\nPlease Re-enter number: ");
			goto number;}
			
			
			if(mob_no<920000000000 || mob_no>929999999999) 
			{
			printf("Invalid Mobile Number...\nPlease Re-enter number: ");
			goto number;
			}
		
		
		int order,seat,amount,ticket_price;
		char ch1;
			
	
		
		printf("\n\t============SEATING PRICES (per seat)==================\n\n");
		printf("\t1.Front seats (Row 1 to 5)  : Rs. %d <%d seats available>\n",mn.front,s1);
		printf("\t2.Mid seats (Row 6 to 10)   : Rs. %d <%d seats available>\n",mn.mid,s2);
		printf("\t3.Back seats (Row 11 to 15) : Rs. %d <%d seats available>\n",mn.back,s3);
		printf("\t4.Balcony seats             : Rs. %d <%d seats available>\n",mn.balcony,s4);
		printf("\n\t=======================================================\n\n");
            
            
    
		seat_order:
		printf("Which seating order would you like? (1,2,3 or 4): ");
		scanf("%d",&order);
		
		if (order==1)
		
			ticket_price=mn.front;
		
		else if(order==2)
			
			ticket_price=mn.mid;
			
		else if(order==3)
			
			ticket_price=mn.back;
	
		else if(order==4)
			
			ticket_price=mn.balcony;
		
		else
		{
			("Wrong Input...\n");
			goto seat_order;
		}
		
		
			fptr=fopen("C:\\Users\\Admin\\Desktop\add_movie_nupl.txt","r");

            fscanf(fptr,"%s  %s  %d  %d  %d  %d\n%d %d %d %d",mn.name,mn.release_date,&mn.front,&mn.mid,&mn.back,&mn.balcony,&s1,&s2,&s3,&s4);

            fclose(fptr);
		
		seats:
		printf("How many seats you want to book: ");
		scanf("%d",&seat);
		
		if (seat==0)
		{
			printf("Seats cant be 0...\n");
			goto seats;
		}
		else if(order==1)
		{
			if(s1==0)
			{
					printf("All seats are booked...Do you want to choose another seating order?(y/n): ");
				fflush(stdin);
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order;
					
					else
					{
						printf("We're Sorry for the inconvenience.\nReturning to main menu...\n");
						Sleep(2000); main(); 
					}
			}
			else if(seat>s1)
			{
					printf("Not enough seats...Do you want to choose another seating order?(y/n): ");
				fflush(stdin);
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order ;
					
					else
					{
						printf("We're Sorry for the inconvenience.\nReturning to main menu...\n");
						Sleep(2000); main(); 
					}
				
			}
			else 
			{
				s1-=seat;
				goto booking;
			}
		}




		else if(order==2)
		{
			if(s2==0)
			{
					printf("All seats are booked... Do you want to choose another seating order?(y/n): ");
				fflush(stdin);	
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order;
					
					else
					{
						printf("We're Sorry for the inconvenience.\nReturning to main menu...\n");
						Sleep(2000); main(); 
					}
			}
			else if(seat>s2)
			{
					printf("Not enough seats... Do you want to choose another seating order?(y/n): ");
				fflush(stdin);	
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order ;
					
					else
					{
						printf("We're Sorry for the inconvenience.\nReturning to main menu...\n");
						Sleep(2000); main(); 
					}
				
			}
			else 
			{
				s2-=seat;
				goto booking;
			}
		}
				
		
		else if(order==3)
		{
			if(s3==0)
			{
					printf("All seats are booked... Do you want to choose another seating order?(y/n): ");
				fflush(stdin);	
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order;
					
					else
					{
						printf("We're Sorry for the inconvenience.\nReturning to main menu...\n");
						Sleep(2000); main(); 
					}
			}
			else if(seat>s3)
			{
					printf("Not enough seats... Do you want to choose another seating order?(y/n): ");
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order ;
					
					else
					{
						printf("Returning to main menu...");
						Sleep(2000); main(); 
					}
				
			}
			else 
			{
				s3-=seat;
				goto booking;
			}
		}
		
		
		
		
		else if(order==4)
		{
			if(s4==0)
			{
					printf("All seats are booked... Do you want to choose another seating order?(y/n): ");
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order;
					
					else
					{
						printf("Returning to main menu...\n");
						Sleep(2000); main(); 
					}
			}
			else if(seat>s4)
			{
					printf("Not enough seats... Do you want to choose another seating order?(y/n): ");
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order ;
					
					else
					{
						printf("Returning to main menu...");
						Sleep(2000); main(); 
					}
				
			}
			else 
			{
				s4-=seat;
				goto booking;
			}
		}
			
		
		booking:
		
	    amount=ticket_price*seat;
		
		printf("\n\tTickets Booked Successsfully...\n\nPlease Wait");
		Sleep(800);
		printf(".");
		Sleep(800);
		printf(".");
		Sleep(800);
		printf(".");		
	 	
	 	
	system("cls");
	
		printf("\n\t\t||======== Bill ========||\n\n");
		printf("\t\t Booking no.    %d\n",id);
		printf("\t\t Movie Name:    %s\n",mn.name);
		printf("\t\t Timing:        %s\n\n", mn.timing);
		printf("\t\t Name:          %s\n",name);
		printf("\t\t Mobile Number: 0%ld\n",mob_no);
		printf("\t\t Total Seats:   %d\n",seat);
		printf("\t\t Amount:        Rs. %d\n",amount);
		if(order==1)
		
			printf("\t\t Front Seats::  Row 1 to 5\n");
		
		else if(order==2)
		
			printf("\t\t Mid Seats::    Row 6 to 10\n");
		
		else if(order==3)
		
			printf("\t\t Back Seats::   Row 11 to 15\n");
		
		else if(order==4)
		
			printf("\t\t Balcony Seats\n");
		
		
		
		
		
		printf("\n***ENJOY YOUR MOVIE***\n");
		printf("Thank You For Booking Tickets\nVisit again sometime...\n\n");
		
		id++;
		
		fptr=fopen("add_movie_nupl.txt","w");

       	fprintf(fptr,"%s  %s %s %d  %d  %d  %d\n%d %d %d %d",mn.name,mn.release_date,mn.timing,mn.front,mn.mid,mn.back,mn.balcony,s1,s2,s3,s4);

              

        fclose(fptr);
		
		
		
		
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

*/

/*void Book_Ticket_Cineplex(){
	

 
 
 struct movies mc;

	int i;
	int s1,s2,s3,s4;
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
	
	
		
		

		
		
		printf("Enter Your Name: ");
		fflush(stdin);	
	
/*label	enter_name: 
	
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
			
	
		/*	if(mob_no<00000000000 && mob_no>9999999999){
			printf("Invalid Mobile Number...\nPlease Re-enter number: ");
			goto number;}
			
			
			if(mob_no<920000000000 || mob_no>929999999999) 
			{
			printf("Invalid Mobile Number...\nPlease Re-enter number: ");
			goto number;
			}
		
		
		int order,seat,amount,ticket_price;
		char ch1;
			
	
		
		printf("\n\t============SEATING PRICES (per seat)==================\n\n");
		printf("\t1.Front seats (Row 1 to 5)  : Rs. %d <%d seats available>\n",mc.front,s1);
		printf("\t2.Mid seats (Row 6 to 10)   : Rs. %d <%d seats available>\n",mc.mid,s2);
		printf("\t3.Back seats (Row 11 to 15) : Rs. %d <%d seats available>\n",mc.back,s3);
		printf("\t4.Balcony seats             : Rs. %d <%d seats available>\n",mc.balcony,s4);
		printf("\n\t=======================================================\n\n");
            
            
    
		seat_order:
		printf("Which seating order would you like? (1,2,3 or 4): ");
		scanf("%d",&order);
		
		if (order==1)
		
			ticket_price=mc.front;
		
		else if(order==2)
			
			ticket_price=mc.mid;
			
		else if(order==3)
			
			ticket_price=mc.back;
	
		else if(order==4)
			
			ticket_price=mc.balcony;
		
		else
		{
			("Wrong Input...\n");
			goto seat_order;
		}
		
		
			ptr=fopen("add_movie_cine","r");

            fscanf(ptr,"%[^\n]  %s  %d  %d  %d  %d\n%d %d %d %d",mc.name,mc.release_date,&mc.front,&mc.mid,&mc.back,&mc.balcony,&s1,&s2,&s3,&s4);

            fclose(ptr);
		
		seats:
		printf("How many seats you want to book: ");
		scanf("%d",&seat);
		
		if (seat==0)
		{
			printf("Seats cant be 0...\n");
			goto seats;
		}
		else if(order==1)
		{
			if(s1==0)
			{
					printf("All seats are booked...Do you want to choose another seating order?(y/n): ");
				fflush(stdin);
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order;
					
					else
					{
						printf("We're Sorry for the inconvenience.\nReturning to main menu...\n");
						Sleep(2000); main(); 
					}
			}
			else if(seat>s1)
			{
					printf("Not enough seats...Do you want to choose another seating order?(y/n): ");
				fflush(stdin);
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order ;
					
					else
					{
						printf("We're Sorry for the inconvenience.\nReturning to main menu...\n");
						Sleep(2000); main(); 
					}
				
			}
			else 
			{
				s1-=seat;
				goto booking;
			}
		}




		else if(order==2)
		{
			if(s2==0)
			{
					printf("All seats are booked... Do you want to choose another seating order?(y/n): ");
				fflush(stdin);	
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order;
					
					else
					{
						printf("We're Sorry for the inconvenience.\nReturning to main menu...\n");
						Sleep(2000); main(); 
					}
			}
			else if(seat>s2)
			{
					printf("Not enough seats... Do you want to choose another seating order?(y/n): ");
				fflush(stdin);	
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order ;
					
					else
					{
						printf("We're Sorry for the inconvenience.\nReturning to main menu...\n");
						Sleep(2000); main(); 
					}
				
			}
			else 
			{
				s2-=seat;
				goto booking;
			}
		}
				
		
		else if(order==3)
		{
			if(s3==3)
			{
					printf("All seats are booked... Do you want to choose another seating order?(y/n): ");
				fflush(stdin);	
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order;
					
					else
					{
						printf("We're Sorry for the inconvenience.\nReturning to main menu...\n");
						Sleep(2000); main(); 
					}
			}
			else if(seat>s3)
			{
					printf("Not enough seats... Do you want to choose another seating order?(y/n): ");
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order ;
					
					else
					{
						printf("Returning to main menu...");
						Sleep(2000); main(); 
					}
				
			}
			else 
			{
				s3-=seat;
				goto booking;
			}
		}
		
		
		
		
		else if(order==4)
		{
			if(s4==0)
			{
					printf("All seats are booked... Do you want to choose another seating order?(y/n): ");
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order;
					
					else
					{
						printf("Returning to main menu...\n");
						Sleep(2000); main(); 
					}
			}
			else if(seat>s4)
			{
					printf("Not enough seats... Do you want to choose another seating order?(y/n): ");
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order ;
					
					else
					{
						printf("Returning to main menu...");
						Sleep(2000); main(); 
					}
				
			}
			else 
			{
				s4-=seat;
				goto booking;
			}
		}
			
		
		booking:
		
	    amount=ticket_price*seat;
		
		printf("\n\tTickets Booked Successsfully...\n\nPlease Wait");
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
		if(order==1)
		
			printf("\t\t Front Seats::  Row 1 to 5\n");
		
		else if(order==2)
		
			printf("\t\t Mid Seats::    Row 6 to 10\n");
		
		else if(order==3)
		
			printf("\t\t Back Seats::   Row 11 to 15\n");
		
		else if(order==4)
		
			printf("\t\t Balcony Seats\n");
		
		
		
		
		
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

*/

void Book_Ticket_Atrium(){
 
 
 struct movies ma[2];

	int i,j,k;
	char name[30],ch;
	long int mob_no;
	int s1[2],s2[2],s3[2],s4[2];
	
	FILE *ptr, *ufp;
	ptr=fopen("add_movie_atr.txt","r");

	if (ptr==NULL)

	{
		printf("File not found...\n");
		exit(1);
	}

	else 

	{
	
		ptr=fopen("add_movie_atr.txt","r");
		rewind(ptr);
		printf("\n\n\t\t||============FOLLLOWING MOVIE IS ON SCREEN==========||\n\n");
		
		printf("Code:\n");
		for(i=0;i<2;i++)
		{
		
		fscanf(ptr,"%[^\n]  %s  %s  %s  %d  %d  %d  %d\n%d %d %d %d\n",ma[i].name,ma[i].release_date,ma[i].screen_date,ma[i].timing,&ma[i].front,&ma[i].mid,&ma[i].back,&ma[i].balcony,&s1[i],&s2[i],&s3[i],&s4[i]);	
		
		printf("\n%d\t\t\tMovie Name: %s\n",i+1,ma[i].name);

        printf("\t\t\tScreen Date (DD/MM/YYYY): %s\n",ma[i].screen_date);
        
        printf("\t\t\tTiming: %s\n",ma[i].timing);

		printf("\n\t\t||====================================================||\n\n");
		}
	Sleep(700);
	
	
	
	 if(s1[i]==0&&s2[i]==0&&s3[i]==0&&s4[i]==0)

    {

        printf("\nThe seats are full! Visit after few days...\n\n");

        main();

    }
	
}
	
	fclose(ptr);
	
	

	rewind(ptr);
	
	printf("which movie u want to see: ");
	scanf("%d",&k);
	k-=1;
		
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
			
	

		
		int order,seat,amount,ticket_price;
		char ch1;
			
			
		printf("\n\t============SEATING PRICES (per seat)==================\n\n");
		printf("\t1.Front seats (Row 1 to 5)  : Rs. %d <%d seats available>\n",ma[k].front,s1[k]);
		printf("\t2.Mid seats (Row 6 to 10)   : Rs. %d <%d seats available>\n",ma[k].mid,s2[k]);
		printf("\t3.Back seats (Row 11 to 15) : Rs. %d <%d seats available>\n",ma[k].back,s3[k]);
		printf("\t4.Balcony seats             : Rs. %d <%d seats available>\n",ma[k].balcony,s4[k]);
		printf("\n\t=======================================================\n\n");

            
    
		seat_order:
		printf("Which seating order would you like? (1,2,3 or 4): ");
		scanf("%d",&order);
		
		if (order==1)
		
			ticket_price=ma[k].front;
		
		else if(order==2)
			
			ticket_price=ma[k].mid;
			
		else if(order==3)
			
			ticket_price=ma[k].back;
	
		else if(order==4)
			
			ticket_price=ma[k].balcony;
		
		else
		{
			("Wrong Input...\n");
			goto seat_order;
		}
		
		
		seats:
		printf("How many seats you want to book: ");
		scanf("%d",&seat);
		
		if (seat==0)
		{
			printf("Seats cant be 0...\n");
			goto seats;
		}
		else if(order==1)
		{
			if(s1[k]==0)
			{
					printf("All seats are booked...Do you want to choose another seating order?(y/n): ");
				fflush(stdin);
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order;
					
					else
					{
						printf("We're Sorry for the inconvenience.\nReturning to main menu...\n");
						Sleep(2000); main(); 
					}
			}
			else if(seat>s1[k])
			{
					printf("Not enough seats...Do you want to choose another seating order?(y/n): ");
				fflush(stdin);
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order ;
					
					else
					{
						printf("We're Sorry for the inconvenience.\nReturning to main menu...\n");
						Sleep(2000); main(); 
					}
				
			}
			else 
			{
				s1[k]-=seat;
				goto booking;
			}
		}




		else if(order==2)
		{
			if(s2[k]==0)
			{
					printf("All seats are booked... Do you want to choose another seating order?(y/n): ");
				fflush(stdin);	
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order;
					
					else
					{
						printf("We're Sorry for the inconvenience.\nReturning to main menu...\n");
						Sleep(2000); main(); 
					}
			}
			else if(seat>s2[k])
			{
					printf("Not enough seats... Do you want to choose another seating order?(y/n): ");
				fflush(stdin);	
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order ;
					
					else
					{
						printf("We're Sorry for the inconvenience.\nReturning to main menu...\n");
						Sleep(2000); main(); 
					}
				
			}
			else 
			{
				s2[k]-=seat;
				goto booking;
			}
		}
				
		
		else if(order==3)
		{
			if(s3[k]==0)
			{
					printf("All seats are booked... Do you want to choose another seating order?(y/n): ");
				fflush(stdin);	
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order;
					
					else
					{
						printf("We're Sorry for the inconvenience.\nReturning to main menu...\n");
						Sleep(2000); main(); 
					}
			}
			else if(seat>s3[k])
			{
					printf("Not enough seats... Do you want to choose another seating order?(y/n): ");
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order ;
					
					else
					{
						printf("Returning to main menu...");
						Sleep(2000); main(); 
					}
				
			}
			else 
			{
				s3[k]-=seat;
				goto booking;
			}
		}
		
		
		
		
		else if(order==4)
		{
			if(s4[k]==0)
			{
					printf("All seats are booked... Do you want to choose another seating order?(y/n): ");
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order;
					
					else
					{
						printf("Returning to main menu...\n");
						Sleep(2000); main(); 
					}
			}
			else if(seat>s4[k])
			{
					printf("Not enough seats... Do you want to choose another seating order?(y/n): ");
					scanf("%c",&ch1);
				
					if(ch1=='y') 
						goto seat_order ;
					
					else
					{
						printf("Returning to main menu...");
						Sleep(2000); main(); 
					}
				
			}
			else 
			{
				s4[k]-=seat;
				goto booking;
			}
		}
			
		
		booking:
		
	    amount=ticket_price*seat;
		
		printf("\n\tTickets Booked Successsfully...\n\nPlease Wait");
		Sleep(800);
		printf(".");
		Sleep(800);
		printf(".");
		Sleep(800);
		printf(".");		
	 	
	 	
	system("cls");
	
		printf("\n\t\t||======== Bill ========||\n\n");
		printf("\t\t Booking no.    %d\n",id);
		printf("\t\t Movie Name:    %s\n",ma[k].name);
		printf("\t\t Timing:        %s\n", ma[k].timing);
		printf("\t\t Date:          %s\n\n", ma[k].screen_date);
		printf("\t\t Name:          %s\n",name);
		printf("\t\t Mobile Number: 0%ld\n",mob_no);
		printf("\t\t Total Seats:   %d\n",seat);
		printf("\t\t Amount:        Rs. %d\n",amount);
		if(order==1)
		
			printf("\t\t Front Seats::  Row 1 to 5\n");
		
		else if(order==2)
		
			printf("\t\t Mid Seats::    Row 6 to 10\n");
		
		else if(order==3)
		
			printf("\t\t Back Seats::   Row 11 to 15\n");
		
		else if(order==4)
		
			printf("\t\t Balcony Seats\n");
		
		
		
		
		
		printf("\n***ENJOY YOUR MOVIE***\n");
		printf("Thank You For Booking Tickets\nVisit again sometime...\n\n");
		
		id++;
		
		ufp=fopen("add_movie_atr.txt","w");


for(i=0;i<2;i++)
{
       	fprintf(ufp,"%s\n%s  %s %s  %d  %d  %d  %d\n%d %d %d %d\n",ma[i].name,ma[i].release_date,ma[i].screen_date,ma[i].timing,ma[i].front,ma[i].mid,ma[i].back,ma[i].balcony,s1[i],s2[i],s3[i],s4[i]);
}
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






void add_movie_atr()
{
	int n,i,j,k;
	char ans;int s1[2],s2[2],s3[2],s4[2];

for(i=0;i<2;i++)
{
	s1[i]=20; s2[i]=20; s3[i]=20; s4[i]=40;
}

		
				printf("number of movies: ");
				scanf("%d",&n);				
				struct movies ma[n];
	FILE *fp;
	fp=fopen("add_movie_atr.txt","a");
	
				if(fp==NULL)
				{
					printf("FILE NOT FOUND");
					exit(0);
				}
			else {
				
		for(i=0;i<n;i++)
		{
			
	
				printf("Enter Name of Movie you want to add:\n");
				fflush(stdin);
				gets(ma[i].name);
				printf("Enter release date: ");
				gets(ma[i].release_date);
				printf("Enter screening date: ");
				gets(ma[i].screen_date);
				printf("Timings: ");
				gets(ma[i].timing);
				printf("\nEnter Prices of seating order\n");
				printf("Fronts seats:: From Row 1 to 5: Rs. ");
				scanf("%d",&ma[i].front);
				printf("Middle seats:: From Row 6 to 10: Rs. ");
				scanf("%d",&ma[i].mid);
				printf("Back seats:: From Row 11 to 15: Rs.");
				scanf("%d",&ma[i].back);
				printf("Balcony seat prices: Rs. ");
				scanf("%d",&ma[i].balcony);
			
			
				fprintf(fp,"%s\n%s %s %s ",ma[i].name,ma[i].release_date,ma[i].screen_date,ma[i].timing);
				fprintf(fp,"%d %d %d %d\n",ma[i].front,ma[i].mid,ma[i].back,ma[i].balcony);
				fprintf(fp,"%d %d %d %d\n",s1[i],s2[i],s3[i],s4[i]);
				
				printf("\n");
		}
				printf("Movie successfully added...");
	//	rewind(fp);
				fclose(fp);
			
			
				}
				
					fflush(stdin);	
				printf("Do you want to return to main menu?(y/n)");
				scanf("%c",&ans);
				if (ans=='y' || 'Y')
					main();
				else
					exit(0);
	
	
	}
	

void view_movie_atr()
{

	char ch;
	int s1[2],s2[2],s3[2],s4[2]; int i;
	FILE *fp;
	fp=fopen("add_movie_atr.txt","r");

	if (fp==NULL)
	{
		printf("File not found...\n");
		exit(0);
	}
	else
	{
	
system("cls");

        if((ch=fgetc(fp))!=EOF)

        {


		    fp=fopen("add_movie_atr.txt","r");
            printf("================ ON SCREENS !!! =====================");
           
    


for(i=0;i<2;i++)
{
		
		 fscanf(fp,"%[^\n]  %s  %s  %s  %d  %d  %d  %d\n%d %d %d %d\n",&ma[i].name,ma[i].release_date,ma[i].screen_date,ma[i].timing, &ma[i].front,&ma[i].mid,&ma[i].back,&ma[i].balcony,&s1[i],&s2[i],&s3[i],&s4[i]);

            printf("\nMovie Name: %s",ma[i].name);

            printf("\nRelease Date: %s",ma[i].release_date);
            
            printf("\nScreening Date: %s",ma[i].screen_date);
            
            printf("\nTimings: %s",ma[i].timing);

            printf("\nTicket pricing:\n\n1.Row 1 to 5: %d Rs per seat (%d seats available)\n2.Row 6 to 10: %d Rs per seat (%d seats available)\n3.Row 11 to 15: %d Rs per seat (%d seats available)\n4.Balcony: %d Rs per seat (%d seats available)\n",ma[i].front,s1[i],ma[i].mid,s2[i],ma[i].back,s3[i],ma[i].balcony,s4[i]);

			printf("=====================================================");
}
        printf("\nPress Enter to Return to Main Menu.\n");
		while(getch()!=13)
		printf(" ");
		
		printf("\nRETURNING TO  MAIN MENU");
		printf(".");
		Sleep(500);
		printf(".");
		Sleep(500);
		printf(".");
		Sleep(500);
				


            fclose(fp);

            main();

        }

        else

        {

            printf("No movie available, please check after few days!!!");

            Sleep(2000);

            main();

        }

	}

    fclose(fp);

	
}




/*void add_movie_cine()
{
	char pass[10], ans;
	int s1=40,s2=40,s3=40,s4=80;
	
				
				FILE *ptr;
				
				ptr=fopen("add_movie_cine.txt","w");
				
				if(ptr==NULL)
				{
					printf("File not found");
					exit(0);
				}
				else
				{
			
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
					
				}
			
				fflush(stdin);	
				printf("Do you want to return to main menu?(y/n)");
				scanf("%c",&ans);
				if (ans=='y' || 'Y')
					main();
				else
					exit(1);
			
		 
		

}


void view_movie_cine()
{

	char ch;
	int s1,s2,s3,s4;
	
	FILE *ptr;
	ptr=fopen("add_movie_cine.txt","r");
	if (ptr==NULL)
	{
		printf("File not found...\n");
		exit(1);
	}
	else
	{
	
system("cls");

        if((ch=fgetc(ptr))!=EOF)

        {


            ptr=fopen("add_movie_cine.txt","r");

            fscanf(ptr,"%s  %s  %s  %d  %d  %d  %d\n%d %d %d %d",mc.name,mc.release_date,mc.timing, &mc.front,&mc.mid,&mc.back,&mc.balcony,&s1,&s2,&s3,&s4);

            printf("================ Now Playing =====================");

            printf("\nMovie Name: %s",mc.name);

            printf("\nRelease Date: %s",mc.release_date);
            
            printf("\nTimings: %s",mc.timing);

            printf("\nTicket pricing:\n1.Row 1 to 5: %d Rs per seat (%d seats available)\n2.Row 6 to 10: %d Rs per seat (%d seats available)\n3.Row 11 to 15: %d Rs per seat (%d seats available)\n4.Balcony: %d Rs per seat (%d seats available)\n",mc.front,s1,mc.mid,s2,mc.back,s3,mc.balcony,s4);

			printf("==================================================");
            
        printf("\nPress Enter to Return to Main Menu.\n");
		while(getch()!=13)
		printf(" ");
		
		printf("\nRETURNING TO  MAIN MENU");
		printf(".");
		Sleep(500);
		printf(".");
		Sleep(500);
		printf(".");
		Sleep(500);
				


            fclose(ptr);

            main();

        }

        else

        {

            printf("No movie available, please check after few days!!!");

            Sleep(2000);

            main();

        }

	}

    fclose(ptr);

}





void add_movie_nupl()
{
	char pass[10],ans;
	int s1=20,s2=20,s3=20,s4=40;
	
	

				
				FILE *fptr;
				
				fptr=fopen("add_movie_nupl.txt","w");
				
				if(fptr==NULL)
				{
					printf("FILE NOT FOUND");
					exit(0);
				}
				
				else
				{
						
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
			
			
				fprintf(fptr,"%s %s %s ",mn.name,mn.release_date,mn.timing);
				fprintf(fptr,"%d %d %d %d\n",mn.front,mn.mid,mn.back,mn.balcony);
				fprintf(fptr,"%d %d %d %d\n",s1,s2,s3,s4);
				printf("Movie successfully added...");
				
					fclose(fptr);
				}
				fflush(stdin);	
				printf("Do you want to return to main menu?(y/n)");
				scanf("%c",&ans);
				if (ans=='y' || 'Y')
					main();
				else
					exit(1);
			
			
		  
}


void view_movie_nupl()
{

	char ch;
	int s1,s2,s3,s4;
	FILE *fptr;
	fptr=fopen("add_movie_nupl.txt","r");
	if (fptr==NULL)
	{
		printf("File not found...\n");
		exit(1);
	}
	else
	{
	
system("cls");

        if((ch=fgetc(fptr))!=EOF)

        {


            fptr=fopen("add_movie_nupl.txt","r");

            fscanf(fptr,"%s  %s %s %d  %d  %d  %d\n%d %d %d %d",mn.name,mn.release_date,mn.timing, &mn.front,&mn.mid,&mn.back,&mn.balcony,&s1,&s2,&s3,&s4);

            printf("================ Now Playing =====================");

            printf("\nMovie Name: %s",mn.name);

            printf("\nRelease Date: %s",mn.release_date);
            
            printf("\nTimings: %s",mn.timing);

            printf("\nTicket pricing:\n1.Row 1 to 5: %d Rs per seat (%d seats available)\n2.Row 6 to 10: %d Rs per seat (%d seats available)\n3.Row 11 to 15: %d Rs per seat (%d seats available)\n4.Balcony: %d Rs per seat (%d seats available)\n",mn.front,s1,mn.mid,s2,mn.back,s3,mn.balcony,s4);

            

        printf("\nPress Enter to Return to Main Menu.\n");
		while(getch()!=13)
		printf(" ");
		
		printf("\nRETURNING TO  MAIN MENU");
		printf(".");
		Sleep(500);
		printf(".");
		Sleep(500);
		printf(".");
		Sleep(500);
				


            fclose(fptr);

            main();

        }

}
}*/



