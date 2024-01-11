#include <stdio.h>
#include<string.h>

struct movies{
	char name[30];
	char release_date[10];
	char timing[10];
}m;

void view_movie();

void main(){
	printf("\n\n||=============  FOLLLOWING MOVIES ARE ON SCREENS  ===============||\n\n");
	view_movie();
}

void view_movie(){
	
	FILE *fptr;
	fptr=fopen("add_movie.txt","r");
	if (fptr==NULL)
	{
		printf("File not found...\n");
		exit(1);
	}
	else 
	{
		fscanf(fptr,"%s %s %s",&m.name,&m.release_date,&m.timing);
		printf("Movie: %s\n",m.name);
		printf("Release date: %s\nTimings: %s\n",m.release_date,m.timing);	
	}
	fclose(fptr);
}
