#include <stdio.h>
#include<string.h>
#include<windows.h>

struct movies{
	char name[30];
	char release_date[10];
	char timing[10];
	int  front,mid,back,balcony;
}ma;

void view_movie_atr();

void main(){

	view_movie_atr();
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
