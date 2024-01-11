#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

int yourID;
int students;



struct stdnt{
	char id[8];
	char name[20];
	float mid1,mid2,final,assignment, quiz;
} s[456];

int total_score=100;

float accumulateEvaluation(int);
float getGPA(float student_score, float total_score);
void replace();
void smartfind(char str_find[]);
void stats();


void main(){
printf("Syed Muhammad Shuja Ur Rahman\n22K-4456\n\n");
int yourID;
printf("Enter ID: ");
scanf("%d",&yourID);	
students=yourID%1000;
printf("Total Students: %d\n",students);

int i,j, ch; float gpa;
	char id[8],str_find[20];


for(i=0;i<students;i++)
{
	printf("||=====Details of Student %d=====||\n",i+1);
	
	ID:
	printf("ID: ");
	fflush(stdin);
	gets(s[i].id);
	
	for(j=0;j<i;j++)
	{
		if(strcmp(s[i].id,s[j].id)==0)
		{
			printf("This ID already exist... Please enter other student ID.\n");
			goto ID;
		}
		else continue;
	}
	
	printf("Name: ");
	gets (s[i].name);
	
	mid_1:
	printf("Mid 1 marks: ");
	scanf("%f",&s[i].mid1);
	if (s[i].mid1>15)
	{
		printf("invalid input...\n");
		goto mid_1;
	}
	
	mid_2:
	printf("Mid 2 marks: ");
	scanf("%f",&s[i].mid2);
	if (s[i].mid2>15)
		{
		printf("invalid input...\n");
		goto mid_2;
	}
	
	finals:
	printf("Finals: ");
	scanf("%f",&s[i].final);
	if(s[i].final>50)
	{
		printf("invalid input...\n");
		goto finals;
	}
	Quiz:
	printf("Quiz marks: ");
	scanf("%f",&s[i].quiz);
	if(s[i].quiz>10)
	{
		printf("invalid input...\n");
		goto Quiz;
	}
	assn:
	printf("Assignments: ");
	scanf("%f",&s[i].assignment);
	if(s[i].assignment>10)
	{
		printf("invalid input...\n");
		goto assn;
	}
	
	printf("\n");
}
	getch();
	system("cls");
	printf("Syed Muhammad Shuja Ur Rahman\n22K-4456\n\n");
	printf("\nPress [g] to calculate GPA of a student\n");
	printf("Press [a] to calculate GPA of all students\n");
	printf("Press [r] to replace the details of student\n");
	printf("Press [f] to find details of the student\n");
	printf("Press [s] to print the stats of the class\n");
	printf("Press [e] to exit the program\n");


while(1){

printf("\nPress Above Mentioned Keys To Perform Desired Task: ");
fflush(stdin);
scanf("%c",&ch);

switch (ch)
{
	case 'g': 	
		printf("Syed Muhammad Shuja Ur Rahman\n22K-4456\n\n");
		printf("Enter id for gpa: ");
		scanf("%s",&id);
		
		for(i=0;i<students;i++)
			{
				if (strcmp(id,s[i].id)==0)
				{
				gpa=accumulateEvaluation(i);
				printf("Student %s got %0.2f\n",id,gpa);
				}
	
			}
			
	break;
		
	case 'a':
				printf("Syed Muhammad Shuja Ur Rahman\n22K-4456\n\n");
				printf("\t\t____________________________________________\n");
				printf("\t\t||============GPA OF ALL STUDENTS=========||\n\n");
				printf("\t\t____________________________________________\n");
				printf("\t\tNAME:\t\tID:\t\tGPA:\n");
				for(i=0;i<students;i++)
				{
				gpa=accumulateEvaluation(i);
				printf("\t\t%s\t\t%s\t\t%0.2f\n",s[i].name,s[i].id,gpa);
				}
		
		
	break;
	
	case 'r':
				printf("Syed Muhammad Shuja Ur Rahman\n22K-4456\n\n");
				replace();
       
	break;
	
	case 'f':
				printf("Syed Muhammad Shuja Ur Rahman\n22K-4456\n\n");
				printf("Enter ID or Name to find Details of specific student: ");
				scanf("%s",&str_find);
				smartfind(str_find);
				
	break;
	
	case 's': 
				printf("Syed Muhammad Shuja Ur Rahman\n22K-4456\n\n");
				printf("\t\t______________________________________\n");
				printf("\t\t||=======STATS OF WHOLE CLASS=======||\n\n");
				printf("\t\t______________________________________\n");
			
				stats();
				
				
				
	break;		
	
	case 'e': exit(1);

	
	default: 
	printf("invalid choice...\n");
	
	
    }

    }
 }

//main end



float accumulateEvaluation(int j){

float student_score,gpa;

		student_score=s[j].mid1+s[j].mid2+s[j].final+s[j].assignment+s[j].quiz;
	
		gpa=getGPA(student_score,total_score);
		
	return gpa;
}



float getGPA(float student_score, float total_score ){

	float gpa,percentage;
	
		percentage = (student_score*100.0)/total_score;
			
			if (percentage>= 86 && percentage<=100)
					gpa=4.0;
			else if (percentage>= 82 && percentage<86)
					gpa=3.66;
			else if (percentage>= 78 && percentage<82)
					gpa=3.33;
			else if (percentage>= 74 && percentage<78)
					gpa=3.0;
			else if (percentage>= 70 && percentage<74)
					gpa=2.66;
			else if (percentage>= 66 && percentage<70)
					gpa=2.33;
			else if (percentage>= 62 && percentage<66)
					gpa=2.0;
			else if (percentage>= 58 && percentage<62)
					gpa=1.66;	
			else if (percentage>= 54 && percentage<58)
					gpa=1.33;
			else if (percentage>= 50 && percentage<54)
					gpa=1.0;		
			else 	
					gpa=0;
		return gpa;
	}

void replace(){

	int i,j;
	
	printf("Which index you wanto update?  ");
	scanf("%d",&i);
	
	printf("ID: ");
	fflush(stdin);
	gets(s[i].id);
	printf("Name: ");
	gets (s[i].name);
	printf("Mid 1 marks: ");
	scanf("%f",&s[i].mid1);
	printf("Mid 2 marks: ");
	scanf("%f",&s[i].mid2);
	printf("Finals: ");
	scanf("%f",&s[i].final);
	printf("Quiz marks: ");
	scanf("%f",&s[i].quiz);
	printf("Assignments: ");
	scanf("%f",&s[i].assignment);
	printf("\nUpdating");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	
	printf("Successfully updated...");
	
	for(j=i;j<i+1;j++)
	{
			printf("\nStudent ID: %s\n", s[i].id);

				printf("Name: %s\n",s[i].name);
				
				printf("Mid 1 marks: %0.2f\n",s[i].mid1);
			
				printf("Mid 2 marks: %0.2f\n",s[i].mid2);
			
				printf("Finals: %0.2f\n",s[i].final);
			
				printf("Quiz marks: %0.2f\n",s[i].quiz);
			
				printf("Assignments: %0.2f\n",s[i].assignment);
	}
	
	
}

void smartfind(char str_find[]){

	
	int i;float gpa;
	
	for(i=0;i<students;i++)
	{
		if (strcmp(str_find,s[i].id)==0 || strcmp(str_find,s[i].name)==0)
		{
				printf("\nStudent ID: %s\n", s[i].id);

				printf("Name: %s\n",s[i].name);
				
				printf("Mid 1 marks: %0.2f\n",s[i].mid1);
			
				printf("Mid 2 marks: %0.2f\n",s[i].mid2);
			
				printf("Finals: %0.2f\n",s[i].final);
			
				printf("Quiz marks: %0.2f\n",s[i].quiz);
			
				printf("Assignments: %0.2f\n",s[i].assignment);
				
				gpa=accumulateEvaluation(i);
				
				printf("GPA: %0.2f\n",gpa);
		}
	
	}

}


void stats(){

	int i; 
	float  sum_mid1=0, avg_mid1, sum_mid2=0, avg_mid2, sum_final=0, avg_final;
	float  each_stdnt_total_score[students], max;
	char   id[10];

	printf("\t\tStudent Count: %d\n",students);
	
	for (i=0;i<students;i++)
	{
		sum_mid1 += s[i].mid1;
		sum_mid2 += s[i].mid2;
	    sum_final += s[i].final;
	    
	    each_stdnt_total_score[i] = s[i].mid1+s[i].mid2+s[i].final+s[i].assignment+s[i].quiz;
	    
		if(each_stdnt_total_score[i]>max)
	    {
	    	max=each_stdnt_total_score[i];
			strcpy(id,s[i].id);
		}
	    
	    
	}
	
	avg_mid1 = sum_mid1 / students;
	avg_mid2 = sum_mid2 / students;
	avg_final = sum_final / students;
	
	
	printf("\t\tAVERAGE OF MID 1 SCORE :  %0.2f\n",avg_mid1);
	printf("\t\tAVERAGE OF MID 2 SCORE :  %0.2f\n",avg_mid2);
	printf("\t\tAVERAGE OF FINAL SCORE :  %0.2f\n\n",avg_final);
	printf("\t\tStudent ID %s has the maximum score of %0.2f\n", id, max);
	
	printf("\t\t_____________________________________________\n");
	printf("\t\tLIST OF STUDENTS ID WHO DIDNT PASS THE COURSE\n");
	printf("\t\t_____________________________________________\n");

	for (i=0;i<students;i++)
	{
		if(each_stdnt_total_score[i]<50)
		printf("\t\t\tStudent ID: %s\n\n\n",s[i].id);
	}
	
	printf("Thank you, my ID is 22k-4456 and my name is Shuja.\n");
}

